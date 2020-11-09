#include <iostream>
#include <algorithm>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
    vector<string> cadenas;
    string str;
    size_t x;

    while(true)
    {
        cout << "Actividad 15 - vector <string>" << endl << endl;
        cout << "1) Agregar final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar ascendente" << endl;
        cout << "7) Ordenar descendente" << endl;
        cout << "8) Insertar" << endl;
        cout << "9) Eliminar" << endl;
        cout << "10) Eliminar ultimo" << endl;
        cout << "0) Salir" << endl;
        cout << "-> Elige una opcion: ";
        getline(cin, str);

        if(str == "1"){
            cout << "Cadena: ";
            getline(cin, str);

            cadenas.push_back(str);
        }
        else if(str == "2"){
            if(!cadenas.empty()){
                for(size_t i(0); i < cadenas.size(); i++){
                    cout << cadenas.at(i) << ",  ";
                }
            }
            else{
                cout << "El vector esta vacio" << endl;
            }
        }
        else if(str == "3"){
            cout << "Tamanio: ";
            cin >> x;

            cin.sync();

            cout << "Cadena: ";
            getline(cin, str);

            cadenas = vector<string>(x, str);
        }
        else if(str == "4"){
            if(cadenas.empty()){
                cout << "El vector esta vacio" << endl;
            }else{
                cout << "Frente: " << cadenas.front() << endl;
            }
        }
        else if(str == "5"){
            if(cadenas.empty()){
                cout << "El vector esta vacio" << endl;
            }else{
                cout << "Ultimo: " << cadenas.back() << endl;
            }
        }
        else if(str == "6"){
            sort(cadenas.begin(), cadenas.end());
        }
        else if(str == "7"){
            sort(cadenas.begin(), cadenas.end(), greater<string>());
        }
        else if(str == "8"){
            cout << "Posicion: ";
            cin >> x;

            cin.sync();

            cout << "Cadena: ";
            getline(cin, str);

            if(x >= cadenas.size()){
                cout << "Posicion invalida" << endl;
            }else{
                cadenas.insert(cadenas.begin() + x, str);
            }
        }
        else if(str == "9"){
            cout << "Posicion: ";
            cin >> x;

            cin.sync();

            if(x >= cadenas.size()){
                cout << "Posicion invalida" << endl;
            }else{
                cadenas.erase(cadenas.begin() + x);
            }
        }
        else if(str == "10"){
            if(cadenas.empty()){
                cout << "El vector esta vacio" << endl;
            }else{
                cadenas.pop_back();
            }
        }
        else if(str == "0"){
            getch();
            break;
        }
        getch();
        system("cls");
    }
    
    return 0;
}