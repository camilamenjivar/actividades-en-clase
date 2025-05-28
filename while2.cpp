#include <iostream>
using namespace std;

int main(){
    int a, b, siguiente;
    int n;
    int contador = 0;
     cout << "¿Cuantos terminos de la serie Fibonacci quieres ver?" << endl;
     cin >> n;

     cout << "Serie Fibonacci: ";
   while(contador < n){
    cout << a << " ";
    siguiente = a + b;
    a = b;
    b = siguiente;
    contador++;


   }

   cout << endl;
  return 0;
}     