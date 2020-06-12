## Etapa #1: Análisis del problema:
### Problema
Dado un año, determinar si es bisiesto.

### Restricciones
- Desarrollar la lógica en una función.
- El nombre de la función debe ser IsBisiesto.
- Aplicar operadores booleanos.
- No aplicar el operador condicional.
- No aplicar if ni switch.

### Hipótesis del trabajo
El programa determinará si un número entero es bisiesto o no, haciendo uso de una función llamada IsBisiesto, la cual contemplará las siguientes condiciones (al mismo tiempo) para que un número entero sea un año bisiesto:
- Es bisiesto si es divisible entre 4.
- No es bisiesto si es divisible entre 100.
- Es bisiesto si es divisible entre 400.

### Refinamiento
Se creará la función IsBisiesto, la cual determinará si un año es bisiesto o no. Dentro de la función main, se llamará a la función IsBisiesto la cual determina si un número entero corresponde a un año bisiesto o no, en caso de que cumpla las siguientes condiciones al mismo tiempo:
- Es divisible entre 4.
- No es divisible entre 100.
- Es divisible entre 400.

### Modelo IPO
Z → Función IsBisiesto → B

## Etapa #2 Diseño de la Solución:
### Léxico
año ∈ Z; esBisiesto ∈ B

### Pruebas
1. Enviar a la función el entero 2020 el cual es divisible entre 4 pero no entre 100 ni entre 400, y que la función retorne el valor: true.
2. Enviar a la función el entero 2400 el cual es divisible entre 4, 100 y 400, y que la función retorne el valor: true.
3. Enviar a la función el entero 2019 el cual no es divisible ni entre 4 ni entre 100 ni entre 400, y que la función retorne el valor: false.
4. Enviar a la función el entero 2300 el cual no es divisible ni entre 4 ni entre 400 pero sí entre 100 y que la función retorne: false.


### Prototipo
bool IsBisiesto(int a);

### Definición de la función
bool IsBisiesto(int a){
   bool anioBisiesto = false;
   return a and (a%4 == 0) and ((a%100 != 0) or a%400 == 0);
}

### Árbol de expresión
![Árbol de expresión](https://github.com/florenciacamila1996/AED/blob/master/03-Bisiesto/Im%C3%A1genes/%C3%81rbol%20de%20expresi%C3%B3n.jpg)

## Compilación y ejecución
#### Compilación
    g++ IsBisiesto.cpp -std=c++17 -o IsBisiesto.exe

#### Ejecución
    ./IsBisiesto.exe