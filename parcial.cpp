#include <iostream>
using namespace std;
int main(){
    int edad, categorias, estudiantes, saldo = 1000, preciobasico = 900, restante;
    cout << "Ingrese su edad";
    cin >> edad;
    if (edad <= 16)
    {
      cout << "No cumple"<<endl;
    }
    
    else if (edad >= 16){
        cout << "Bienvenido al sistema" <<endl;

        cout << "Menu" <<endl;
        cout << "Estudiante" <<endl;
        cout << "Profesional" <<endl;
        cout << "Ver todos" <<endl;
        cout << "Salir" <<endl;
        cout << "Elija una opcion" <<endl;
        cin >> categorias;
    
        switch (categorias)
        {
        case 1:
            cout << "Laptop basica $900" <<endl;
            cout << "Tableta estudiantil $600" <<endl;
            cout << "Chromebook $700" <<endl;
              cout << "Elija una opcion" <<endl;
        cin >> estudiantes;

        switch (estudiantes)
        {
        case 1:
            cout << "A seleccionado la opcion laptop basica...." <<endl;
            if (saldo >= preciobasico){
                cout << "Puede comprar el producto" <<endl;
                restante = saldo - preciobasico / 25; 
                cout << "Su saldo disponible es: " << restante <<endl;
            }

        else {
            cout << "No hay saldo suficiente" <<endl;
        }
            break;
        
        default:
            break;
        }
            break;
        
        default:
            break;
        }

    }
        else {
        cout << "No cumple" <<endl;
    }
}