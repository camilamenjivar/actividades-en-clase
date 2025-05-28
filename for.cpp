#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<< "Ingrese un numero" <<endl;
    cin>> numero;
    if (numero < 0){
        cout << "No puede ingresar numero menor a 0" <<endl;

    }
    else {
        cout << "Tablas de multiplicar del " << numero <<":" <<endl;
        for (int i = 1; i < 10; i++)
        {
            cout<< numero << "x" << i  << "=" << numero * i <<endl;
        }
        
    }



}