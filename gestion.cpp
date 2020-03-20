#include <iostream>
#include <string>
#include"Voilier.h"
#include<map>
//#include"Voilier.cpp"
//#include"Client.h"
using namespace std;


    
    
int main()
{

   
    
   
/////////creation d'une fiche client/////////////////
    Voilier alpha(1,1,1);
    alpha.creerunefiche(alpha);
    alpha.affiche(alpha);

};






























/*

cout << type3 << port3 << service3 <<endl;
    //Voilier alpha(1,1,1);
    //alpha.affiche(alpha);
    //Voilier beta(0,0,0);
    //Voilier initialiser(Voilier beta());

    Voilier initialiser(type3 ,port3 ,service3);
    cout << type3 << port3 << service3 <<endl;
    Voilier beta(type3,port3,service3);
    beta.affiche(beta);







Voilier initialiser(int type2 ,int port2 ,int service2)
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
*/
