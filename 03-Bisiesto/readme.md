## Etapa #1: Análisis del problema:
#### Problema
Dado un año, determinar si es bisiesto.

### Restricciones
• Desarrollar la lógica en una función.
• El nombre de la función debe ser IsBisiesto.
• Aplicar operadores booleanos.
• No aplicar el operador condicional.
• No aplicar if ni switch.

### Hipótesis del trabajo
El programa deberá recibir un año y determinar si es bisiesto o no. El año puede estar ingresado directamente en el código del programa o puede ser ingresado por el usuario, teniendo en cuenta las restricciones ya indicadas y sin utilizar un operador condicional, if o switch.

### Refinamiento
Se creará la función IsBisiesto, la cual determinará si un año es bisiesto o no. Dentro de la función main, se llamará a la función IsBisiesto y la respuesta de esta última se almacenará en la variable booleana esBisiesto.

Se tomará un año ingresado por el usuario y se imprimirá el mensaje "Es Bisiesto." si el valor de la variable esBisiesto es "true", de lo contrario, el programa terminará su ejecución con un error. Esto último se debe a que se utiliza la función assert para validar la respuesta de la función almacenada en la variable esBisiesto.

### Modelo IPO
B = {true,false}
N → Función IsBisiesto → B

## Etapa #2 Diseño de la Solución:
### Léxico
anio ∈ Z; esBisiesto ∈ B

### Pruebas
1. Igresar un año que sea divisible por 4 pero no por 100 y sí por 400. Resultado esperado: se recibe el mensaje "Es bisiesto.".
2. Ingresar un año que sea divisible por 4, por 100 y por 400. Resultado esperado: se recibe un error y el programa termina su ejecución.

### Prototipo
bool IsBisiesto(int a);

### Definición de la función
bool IsBisiesto(int a){
   bool anioBisiesto = false;
   return a and (a%4 == 0) and ((a%100 != 0) or a%400 == 0);
}

### Árbol de expresión
![Árbol de expresión]()

## Compilación y ejecución
#### Compilación
    g++ IsBisiesto.cpp -std=c++17 -o IsBisiesto.exe

#### Ejecución
    ./IsBisiesto.exe