#include <iostream>
using namespace std;
int main (){
    int notas;
    cout << "Ingrese sus notas";
    cin >> notas;
    if ( notas >= 6 ||notas >= 12){
        cout << "Ha pasado el año";
    }
    else if (notas >= 4){
        cout << "Debes esforzarte más";
    
    }
    else {
        cout << "gracias por tu esfuerzo";
    }
    
    return 0;
