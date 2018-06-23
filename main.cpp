#include <iostream>
#include <vector>
#include "personas.h"
#include <string>

using namespace std;


int menu();

int main(){
    int opcion = 0;
    char op = 'y';
    int pos;
    vector <personas*> people;
       do{
        //Inicio del switch con menu
        switch (menu()){
        
        case 1:{
        string Nombre,Cabello,Ojos,Piel,Genero;
        bool Fertil;
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
        }
        case 2:{
            
            for(int i=0;i<people.size();i++){
                    cout<<people[i]->getNombre()<<" "<<people[i]->getCabello()<<" "
                    <<people[i]->getOjos()<<" "<<people[i]->getPiel()<<" "<<people[i]->getFertil()<<" "
                    <<people[i]->getGenero()<<" "<<endl;
                }
            cout<<"Ingrese posicion a eliminar: "<<endl;
            cin>>pos;
            people.erase(people.begin()+pos);        
            break;
        }
        case 3:{



            break;
        }
        
        case 4:{
            for(int i=0;i<people.size();i++){
                    cout<<people[i]->getNombre()<<" "<<people[i]->getCabello()<<" "
                    <<people[i]->getOjos()<<" "<<people[i]->getPiel()<<" "<<people[i]->getFertil()<<" "
                    <<people[i]->getGenero()<<" "<<endl;
                }
            break;
        }
        case 5:{
            int sujetoa,sujetob;   

            char protect;        
            for(int i=0;i<people.size();i++){
                cout<<people[i]->getNombre()<<endl;
            }
            cout<<"Ingrese el nombre de la primera persona: "<<endl;
            cin>>sujetoa;
            cout<<"Ingrese el nombre de la segunda persona: "<<endl;
            cin>>sujetob;

            if (people[sujetoa]-> getGenero() == people[sujetob]->getGenero()){
                cout<<"Son del mismo genero...."<<endl;
                
            }else{
                personas* sa,sb,sc;
                
                cout<<"¿Utilizó o utilizará protección?(s/n)"<<endl;
                cin>>protect;

                if (protect == 's'){
                    sc =*sa * *sb
                }else if(protect == 'n'){
                    sc = *sa + *sb;

                }
                //3 ifs para sin proteccion
                //2ifs no va el de si se salio algo
                //en el cpp
                


            }
            break;
        }
        //opcion para Salir
        case 6:{
            op = 'n';
            cout << "\\.:.***Tenga Un Buen Día***.:./" << endl;
            break;
        }
        default:{
            //Opcion no valida
            cout << "Opcion No Disponible." << endl;
            cout<< "Intente de nuevo."<<endl;
            break;
        }

        } //Switch End
        cout << endl;

    } while (op == 'y');
    cout << endl;

    return 0;
}

int menu(){
    int opcion;
    cout<<"Buen dia."<<endl;
    cout<<"Seleccione una opcion en el menu en base a los números."<<endl;
    cout<<"     MENU"<<endl
            <<"1. Agregar."<<endl
            <<"2. Eliminar."<<endl
            <<"3. simulacion."<<endl
            <<"4. mostrar."<<endl
            <<"5. Probabilidades"<<endl
            <<"6. Salir "<<endl
            <<"Ingrese una opcion: ";
            cin >> opcion;
    
    return opcion;
}
