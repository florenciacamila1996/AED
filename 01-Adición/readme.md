## Etapa #1: Análisis del problema:
#### Problema
*Mostrar la suma de dos números que ingresa el usuario.*

### Refinamiento e Hipótesis del trabajo
*El programa deberá recibir y almacenar en dos variables distintas, dos dígitos que deberá ingresar el usuario por pantalla.*

*El programa deberá contener dos variables numéricas de tipo enteras. En este caso utilizaremos las variables "a" y "b".*
*Primero se solicitará al usuario que ingrese el primer dígito y se almacenará el valor ingresado por el mismo en la variable "a". Luego, se le solicitará que ingrese el segundo a dígito almacenando su valor en la variable "b". Una vez almacenados ambos valores, se sumarán para luego mostrar el resultado de la suma por pantalla.*

### Modelo IPO
Z x Z → Suma → Z

## Etapa #2 Diseño de la Solución:
### Léxico
a,b ∈ Z

### Representación del Algoritmo
#### Representación visual.
![Diagrama de Chapin/Lindsay/UTN FRBA](https://github.com/florenciacamila1996/AED/blob/master/01-Adici%C3%B3n/representaci%C3%B3n%20visual.jpg)

#### Representación textual.
~~~
Escribir "¡Bienvenid@! Por favor, ingrese el primer dígito a sumar:".
Leer un número entero y almacenarlo en la variable "a".
Escribir "Ahora ingrese el segundo dígito a sumar:".
Leer el segundo número entero y almacenarlo en la variable "b".
Escribir "El resultado de la suma es: ".
Mostrar a+b.
~~~

## Compilación y ejecución
#### Compilación
    g++ Adición.cpp -std=c++17 -o Adición.exe

#### Ejecución
    ./Adición.exe