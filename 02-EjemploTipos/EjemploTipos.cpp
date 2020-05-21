/*
 21/05/2020
 Florencia Camila Muratore
 Algoritmo para ejemplificar tipos de datos
*/

#include <iostream>
#include <assert.h>
#include <bits/stdc++.h>
#include <string> 
using namespace std;

int main (){
    cout << "1. Ejemplo de aplicación de una constante de tipo boolean:\n se declaró la constante edadActual con el valor 10 que representa la edad actual de una persona y la constante edadMyorDeEdad con el valor 18, la cual representa la mayoría de edad. También se declara la constante esMayorDeEdad, la cual representará el valor de verdad de la operación: edadActual >= edadMayorDeEdad.\n";
    //Declaro las constante.
    const int edadActual = 10, edadMayorDeEdad = 18;
    const bool esMayorDeEdad = edadActual >= edadMayorDeEdad; 
    
    //Valido el valor de la constante esMayorDeEdad.
    assert (esMayorDeEdad == false);
    cout << "Validamos que el valor de verdad de la constante esMayor de edad será: false, ya que la edad actual de la persona (10) es menor que el valor de la mayoría de edad. Entonces imrpimiremos el siguiente mensaje:\n";
    //Emito una respuesta en base al valor de las constantes actuales.
    if (esMayorDeEdad) 
        cout << "La persona es mayor de edad.\n"; 
    else
        cout << "La persona no es mayor de edad.\n";

    cout << "\n";

    cout << "2. Ejemplo de aplicación de una constante de tipo caracter:\n";
    cout << "El siguiente símbolo corresponde al código ASCII 64:\n";
    const char caracter = 64;
    cout << caracter << "\n";
    cout << "Al caracter de código ASCII 64 se le suma el valor 0, así, el caracter se convierte automáticamente en un número, el cual es el resulado de la suma del código ASCII (0) más 0:\n";
    cout << caracter + 0 << "\n"; //
    cout << "Si en vez de sumarle el valor 0, le sumamos el valor 1 y al resultado lo convertimos a caracter, se visualiza el siguiente símbolo:\n";
    cout << char(caracter + 1) << "\n";
    cout << "Finalmente validamos que el último símbolo visualizado, corresponde al código ASCII 65.\n";
    const char otroCaracter = caracter + 1;
    assert (otroCaracter == 65);

    cout << "\n";

    cout << "3. Ejemplo de aplicación de una constante de tipo entero:\nSe mostrarán los primeros 10 números impares, la suma de los mismos y cuál es el décimo número impar.\n";
    //Programa que retorna los primeros 10 números impares.
    int contadorDeImapares = 0;
    int sumaDeImpares = 0;
    int ultimoImpar = 0;
    int numero = 0;
    const int decimoNUmeroImpar = 19;

    cout << "Números impares:\n"<< contadorDeImapares << "\n";
    while (contadorDeImapares < 10)
        {
            if (numero%2==1)
            {
                contadorDeImapares ++;
                sumaDeImpares = sumaDeImpares + numero;
                ultimoImpar = numero;
                cout << numero << "\n";
            }
            numero ++;
        }
    assert (ultimoImpar == decimoNUmeroImpar);
    cout << "Se validó que el último número impar es 19.\n";
    cout << "Suma de los primeros 10 números impares: "<< sumaDeImpares << "\n";
    
    cout << "\n";
    
    cout << "4. Ejemplo de aplicación de una constante de tipo double:\nSe validará y se mostrará el valor del número π, haciendo uso de la función acos().\n";
    const double pi = 2 * acos(0.0); 
    assert (pi > 3.14159 && pi < 3.15);
    cout << "Se validó que el valor de π es: "<< pi << "\n";

    cout << "\n";

    cout << "5. Ejemplo de aplicación de una constante de tipo string:\nSe mostrarán dos funciones disponibles para la clase string.\n";

    string cadenaDeCaracteres = "Mi nombre es Florencia Camila Muratore";
    cout << "El valor inicial de la constante de tipo string es: "<< cadenaDeCaracteres << "\n"; 
    const std::string cadenaDeCaracteresFinal = "Mi nombre es Florencia Camila Muratore";
    
    cadenaDeCaracteres.push_back('.'); 
    cout << "Usando la función push_back(), agregué un punto al final de mi constante: "<< cadenaDeCaracteres << "\n"; 

    cadenaDeCaracteres.pop_back(); 
    assert (cadenaDeCaracteres == cadenaDeCaracteresFinal);
    cout << "Usando la función pop_back(), quito el último caracter de mi constante, es este caso, el punto agregado en el paso anterior, y valido que el valor final de mi constante de tipo string es: "<< cadenaDeCaracteres << "\n";

    cout << "\n";

    cout << "6. Ejemplo de aplicación de una constante de tipo unsigned int:\nSe creará la constante enteroSinSigno = 10 y se validará que la misma es distinta a -10, por lo cual finalizará con un error relacionado a la función assert.\n";

    const unsigned int enteroSinSigno = 10;
    assert (enteroSinSigno == -10);
}