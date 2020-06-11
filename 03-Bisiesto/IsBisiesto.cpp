#include <iostream>
#include <assert.h>

using namespace std;

bool IsBisiesto(int a);

int main(){
   int anio;
   cout << "A continuación ingrese un año. El programa imprimirá 'Es bisiesto.' si el año ingresado es bisiesto, de lo contrario, terminará con un error.\nAño: ";
   cin >> anio;
   bool esBisiesto = IsBisiesto(anio);
   assert(esBisiesto==true);
   cout << "Es bisiesto.";
}
bool IsBisiesto(int a){
   bool anioBisiesto = false;
   return a and (a%4 == 0) and ((a%100 != 0) or a%400 == 0);
}
