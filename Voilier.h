#ifndef DEF_VOILIER
#define DEF_VOILIER

#include <iostream>
#include <string>

class Voilier
{

private:
    int type;
    int port;
    int service;
public:
    
    Voilier(int type_init,int port_init,int service_init);
    ~Voilier();
    void affiche(Voilier P);
    void afficher () const;

////////GETTERS SETTERS////////////////
    void settype(int t);
    int gettype();

    void setport(int p);
    int getport();

    void setservice(int s);
    int getservice();
///////////////////////////////////////
    int creerunefiche(Voilier P);
    Voilier creerunefiche2(Voilier P);


};

#endif