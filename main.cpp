//
//  main.cpp
//  LDE_I_F
//
//  Created by Jafeth Alonso Carreón on 4/2/20.
//  Copyright © 2020 Jafeth Alonso Carreón. All rights reserved.
//

#include <iostream>
using namespace std;

class Nodo
{
private:
    int dato;
    Nodo *sig;
    Nodo *ant;
public:
    Nodo()
    {    dato=0;
        sig=NULL;
        ant=NULL;
    }
    Nodo(int x)
    {    dato=x;
        sig=NULL;
        ant=NULL;
    }
    void Asignasig(Nodo*);
    void Asignaant(Nodo*);
    void Leer(int);
    void Imprimir();
    Nodo *Obtienesig();
    Nodo *Obtieneant();
    int Obtienedato();
};

class LDE
{    private:
    Nodo *Inicio, *Fin;
public:
    void InsertarI(int);
    void InsertarF(int);
    void BorrarI();
    void BorrarF();
    void Imprimir();
    void ImprimirR();
    int Contar();
    Nodo *Buscar(int);
    void Borrar(int);
    LDE()
    {
        Inicio=NULL;
        Fin=NULL;
        
    }
    
};


void Nodo::Asignasig(Nodo *x)
{
    this->sig=x;
}
void Nodo::Asignaant(Nodo *x)
{
    this->ant=x;
}


void Nodo::Leer(int x)
{
    this->dato=x;
}
void Nodo::Imprimir()
{
    cout<<this->dato<<endl;
}
Nodo* Nodo::Obtienesig()
{
    return(this->sig);
}

Nodo* Nodo::Obtieneant()
{
    return(this->ant);
}


int Nodo::Obtienedato()
{
    return(this->dato);
}

void LDE::InsertarI(int E)
{
    if(!Inicio)
    {
        Inicio=new Nodo(E)
        Fin=Inicio
    }
    else
    {
        Nodo *Yapongame10=new Nodo(E);
            Yapongame10->Asignasig(Inicio);
        Inicio->Asignaant(Yapongame10);
        Inicio=Yapongame10;
    }
}

void LDE::InsertarF(int E)
{
    if(!Inicio)
    {
        Inicio=new Nodo(E)
    }
    else
    {
        Nodo *SoyEim=Inicio;
        Fin->Asignasig(SoyEimi);
        SoyEimi->Asignaant(Fin);
        Fin=SoyEimi;
    }
}



int main(int argc, const char * argv[])
{
    
    
    
    LDE A;
    int opc, dato;
    do{
        cout<<"1.- Insertar Inicio"<<endl;
        cout<<"2.- Insertar Fin"<<endl;
        cout<<"3.- Borrar Inicio"<<endl;
        cout<<"4.- Borrar Fin"<<endl;
        cout<<"5.- Contar"<<endl;
        cout<<"6.- Borrar"<<endl;
        cout<<"7.- Imprimir"<<endl;
        cout<<"8.- Imprimir en Reversa"<<endl;
        cout<<"9.- Salir"<<endl;
        cout<<"Teclee la opcion"<<endl;
        cin>>opc;
        
        switch(opc)
        {
            case 1:
                cout<<"teclee el dato a insertar"<<endl;
                cin>>dato;
                A.InsertarI(dato);
                break;
            case 2:
                cout<<"Teclee el dato a insertar"<<endl;
                cin>>dato;
                A.InsertarF(dato);
                break;
            case 3:
                A.BorrarI();
                break;
            case 4:
                A.BorrarF();
                break;
            case 5:
                dato=A.Contar();
                cout<<"Hay "<<dato<<" nodos en la Lista"<<endl;
                break;
            case 6:
                cout<<"Teclee el dato a borrar"<<endl;
                cin>>dato;
                A.Borrar(dato);
                break;
            case 7:
                A.Imprimir();
                break;
            case 8:
                A.ImprimirR();
                break;
            default:
                cout<<"opción salir...";
                break;
        }
    }while(opc<9);
    
    return 0;
}
