#include <iostream>
using namespace std;

int main(){
    string contrasenacorrecta = "1234";
    string contrasena;

    do {
        cout << "ingresa la contrasena" <<endl;
        cin>> contrasena;

        if (contrasena != contrasenacorrecta){
            cout << "casi adivinas la contrasena" <<endl;

        }

    } while (contrasena != contrasenacorrecta);
        cout << "felicidades adivinaste la contrasena";

    return 0;
}