#include <iostream>
#include <vector>
#include "personas.h"

using namespace std;

int menu();

int main(){
    int opcion = 0;
    char op = 'y';
    vector <personas*> people;
       do{
        //Inicio del switch con menu
        switch (menu())
        {
        
        case 1:
        string Nombre,Cabello,Ojos,Piel,Fertil,Genero;
                cout<<"Nombre: "<<endl;
                cin>>Nombre;
                cout<<"Color De Cabello: "<<endl;
                cin>>Cabello;
                cout<<"Color De Ojos: "<<endl;
                cin>>Ojos;
                cout<<"Color De Piel: "<<endl;
                cin>>Piel;
                cout<<"¿Es fertil?: "<<endl;
                cin>>Fertil;
                cout<<"Genero: "<<endl;
                cin>>Genero;
                personas* a = new personas(Nombre, Cabello, Ojos, Piel, Fertil, Genero);
                people.push_back(a);
            
            break;
        
        case 2:

            break;
        
        case 3:


            break;
        
        case 4:
            for(int i=0;i<people.size();i++){
                    cout<<people[i]->getNombre()<<" "<<people[i]->getCabello()<<" "
                    <<people[i]->getOjos()<<" "<<people[i]->getPiel()<<" "<<people[i]->getFertil()<<" "
                    <<people[i]->getGenero()<<" "<<endl;
                }
            break;
        //opcion para Salir
        case 5:
            op = 'n';
            cout << "\\.:.***Buen Día***.:./" << endl;
            break;
        default:
            //Opcion no valida
            cout << "Opcion No Disponible." << endl;
            break;

        } //Switch End
        cout << endl;

    } while (op == 'y');
    cout << endl;
}

int menu(){
    cout<<"     MENU"<<endl
            <<"1. Agregar."<<endl
            <<"2. Eliminar."<<endl
            <<"3. simulacion."<<endl
            <<"4. mostrar."<<endl
            <<"5. Salir "<<endl
            <<"Ingrese una opcion: ";
            cin >> opcion;
    
    return opcion;
}
