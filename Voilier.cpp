#include <iostream>
#include <string>
#include"Voilier.h"

using namespace std;



Voilier::Voilier(int type_init,int port_init,int service_init)
{
    type = type_init;
    port = port_init;
    service = service_init;
}

Voilier::~Voilier()
{
}

void Voilier::settype(int t)
{
    type = t;
}

int Voilier::gettype()
{
    return type;
}

void Voilier::setport(int p)
{
    port = p;
}

int Voilier::getport()
{
    return port;
}

void Voilier::setservice(int s)
{
    service = s;
}

int Voilier::getservice()
{
    return service;
}

void Voilier::affiche(Voilier P)
{
    cout<<"Le type de voilier est : " << type <<" le type de port est : "<< port <<" le type de service est "<< service << endl;
}

void Voilier::afficher() const
{
    cout<<"Le type de voilier est : " << type <<" le type de port est : "<< port <<" le type de service est "<< service << endl;
}

int Voilier::creerunefiche(Voilier P)
{
    int t;
    int p;
    int s;

    cout<<"quel type"<<endl;
    cin >>t;
    P.settype(t);
    cout<<"quelle port"<<endl;
    cin>>p;
    P.setport(p);
    cout<<"service ?"<<endl;
    cin>>s;
    P.setservice(s);

    P.affiche(P);

    
}

Voilier Voilier::creerunefiche2(Voilier P)
{
    int t;
    int p;
    int s;

    cout<<"quel type"<<endl;
    cin >>t;
    P.settype(t);
    cout<<"quelle port"<<endl;
    cin>>p;
    P.setport(p);
    cout<<"service ?"<<endl;
    cin>>s;
    P.setservice(s);

    P.affiche(P);

   
    
}















/*Voilier Voilier::initialiser(int type2 ,int port2 ,int service2)
{

    cout<<"quelle type de bateau avez-vous ? "<<endl;
    cout<<"Voilier non habitable tapé 0"<<endl;
    cout<<"Voilier type 1 tapé 1"<<endl;
    cout<<"Voilier type 2 tapé 2"<<endl;

    cin>>type2;
    cout<<type2<<endl;

    cout<<"tape 1 si vous voulez une place dans le port et 0 si vous voulez une place dans un corps mort"<<endl;

    cin>>port2;
    cout<<port2<<endl;

    if (type2 != 0 && port2 != 0)
    {
        cout<<"Voulez vous avoir acces au service"<<endl;
        cout<<"tapé 1 pour oui ou 0 pour non"<<endl;

        cin>>service2;
    }
    else
    {
        service2=0;
    }

    cout<<service2<<endl;

    Voilier gamma(type2, port2,service2);

    return gamma;
};















/*Voilier Voilier::initialiser(Voilier P)
{
    int type1;
    bool port1;
    bool service1;
    
    cout<<"quelle type de bateau avez-vous ? "<<endl;
    cout<<"Voilier non habitable tapé 0"<<endl;
    cout<<"Voilier type 1 tapé 1"<<endl;
    cout<<"Voilier type 2 tapé 2"<<endl;

    cin>>type1;

    cout<<"tape 1 si vous voulez une place dans le port et 0 si vous voulez une place dans un corps mort"<<endl;

    cin>>port1;

    if (type1 != 0 && port1 != 0)
    {
        cout<<"Voulez vous avoir acces au service"<<endl;
        cout<<"tapé 1 pour oui ou 0 pour non"<<endl;

        cin>>service1;
    }
    else
    {
        service1=0;
    }

    Voilier arthur(type1,port1,service1);

    return arthur;
}*/
