#include <iostream>
using namespace std;
int main (){
    int ano;
    cout << "Ingrese un numero para determinar si es bisiesto o no";
    cin >> ano;
    if (ano % 4 == 0 && ano % 400 == 0) {
        cout << "Año bisiesto" << endl;

    }

    else if (ano % 100 != 0){
        cout << "Año bisiesto" << endl;
    }
    else {
    cout << "Año no es bisiesto" << endl;

    }
return 0;
}