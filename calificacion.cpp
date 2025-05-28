#include <iostream>
using namespace std;
int main (){
    int nota;
    cout << "Ingrese su calificacion (0 a 100)";
    cin >> nota;
// EL && SIGNIFICA QUE LA NOTA ESTA EN 90 Y 100//
    if (nota >= 90 && nota <= 100){
        cout << "Su calificacion es: A";

    }
    else if (nota >= 80){
        cout << "Su calificaion es: B";

    }
    else if (nota >= 70){
        cout << "Su calificacion es: C";

    }
    else if (nota >= 60){
        cout << "Su calificacion es: D";

    }
    else if (nota < 60){
        cout << "Su nota es: F";
    }

    else {
        cout<< "ERROR. DEBE ESTAR ENTRE 0 Y 100";

    }
  return 0;

}