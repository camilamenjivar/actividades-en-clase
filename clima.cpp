#include <iostream>
using namespace std;
int main (){
    int numero;
    cout << "Ingrese un numero" <<endl;
    cin >> numero;
    if (numero < 0){
        cout << "No puede ingresar un numero negativo" <<endl;

    }
     
    else 
    {
        for (int i = 0; i < 100; i++)
        {
            cout<< numero << "+" << i  << "=" << numero + i <<endl;



        }
        
    }
    
        
}