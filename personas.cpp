#include "personas.h"

using namespace std;

personas::personas(string pNombre, string pCabello, string pOjos, string pPiel, string pFertil, string pGenero){
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

string personas::getFertil(){
    return fertil;
}
void personas::setFertil(string pFertil){
    fertil=pFertil;
}

string personas::getGenero(){
    return genero;
}
void personas::setGenero(string pGenero){
    genero=pGenero;
}

const personas personas::operator +(const personas& r){
    
    if (+ == 1)


}
