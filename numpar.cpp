#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<< "Ingrese un numero" <<endl;
    cin>> numero;
/// EL % 2 == 0 ES PARA DECIR QUE SI EL NUMERO ES DIVISIBLE ENTRE 2 SERA UN NUMERO PAR// 
    if (numero % 2 == 0){
        cout<< "Su numero es par" <<endl;

    }

    else {
        cout<< "Su numero es impar" <<endl;
    }

    return 0;
}