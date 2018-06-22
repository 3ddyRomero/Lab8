#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>
using namespace std;
using std::ostream;
using std::istream;
using std::string;

class personas{
    private:
        
        string nombre;
        string cabello;
        string ojos;
        string piel;
        string fertil;
        string genero; 

    public:

        personas();
        personas(string, string, string, string, string, string);
        //metodos get
        string getNombre();
        string getCabello();
        string getOjos();
        string getPiel();
        string getFertil();
        string getGenero();
        
        //metodos set 
        void setNombre(string);
        void setCabello(string);
        void setOjos(string);
        void setPiel(string);
        void setFertil(string);
        void setGenero(string);

        const personas operator +(const personas&);
        const personas operator *(const personas&); 

        ~personas();

};
#endif