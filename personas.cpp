#include "personas.h"
#include<stdlib.h>
#include<time.h>
using namespace std;

personas::personas(string pNombre, string pCabello, string pOjos, string pPiel, bool pFertil, string pGenero){
    nombre=pNombre;
    cabello=pCabello;
    ojos=pOjos;
    piel=pPiel;
    fertil=pFertil;
    genero=pGenero;
}

string personas::getNombre(){
    return nombre;
}
void personas::setNombre(string pNombre){
    nombre=pNombre;
}

string personas::getCabello(){
    return cabello;
}
void personas::setCabello(string pCabello){
    cabello=pCabello;
}

string personas::getOjos(){
    return ojos;
}
void personas::setOjos(string pOjos){
    ojos=pOjos;
}

string personas::getPiel(){
    return piel;
}
void personas::setPiel(string pPiel){
    piel=pPiel;
}

bool personas::getFertil(){
    return fertil;
}
void personas::setFertil(bool pFertil){
    fertil=pFertil;
}

string personas::getGenero(){
    return genero;
}
void personas::setGenero(string pGenero){
    genero=pGenero;
}

personas personas::operator +(personas& s){
    int ran,mujer;
    srand(time(NULL));
    ran = 1+rand()%(101-1);
    
    if (ran == 1){
        srand(time(NULL));
        mujer = 6+rand()%(28-6);
        if(mujer >= 6 || mujer <= 28){

        }
    }
    
    return s;
}

personas personas::operator *(personas& g){
    int ran,mujer;
    srand(time(NULL));
    ran = 1+rand()%(101-1);

        srand(time(NULL));
        mujer = 6+rand()%(28-6);
        if(mujer >= 6 || mujer <= 28){
            
        }
        return g;
    }
    
    
    
