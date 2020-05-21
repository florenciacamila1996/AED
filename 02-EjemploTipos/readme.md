## Etapa #1: Análisis del problema:
#### Problema
Diseñar un programa C++ que ejemplifique la aplicación de los tipos de datos vistos en clases.

#### Restricciones
No extraer valores de cin, usar valores literales (constantes).

### Refinamiento
El programa deberá ejemplificar la aplicación de los tipos de datos vistos en clase, los cuales son: bool, char, unsigned, int, double, y string, luego, sin utilizar datos ingresados por el usuario y finalmente validarlos utilizando la función "assert".

### Hipótesis del trabajo
Se deberá generar un algoritmo no estructurado que ejemplifique el uso de los tipos de datos: bool, char, unsigned, int, double, y string. Los mismos deberán contener valores constantes que deberán ser validados con la función assert y no se deberá hacer uso de datos ingresados por el usuario, por lo cual, si se requiere generar un listado de datos, se deberá escribir la lógica que corresponda para generar el listado.

### Créditos extra
No utilizar cout y sí utilizar la funcion assert.
Responder: ¿Son esos realmente todos los tipos que vimos en clase? Justifique.

Respuesta:  no son los únicos tipos de datos disponibles, ya que también podemos encontrar por ejemplo, para caracteres: wchar_t, para enteros: short, long long, para decimales: float, long double, etc.. Además, el modificador unsigned se puede aplicar todos los tipos de datos que poseen números enteros generando así, más tipos de datos.

## Etapa #2 Diseño de la Solución:
Para ejemplificar el uso de los tipos de datos solicitados, se generaron ejemplos de resolución de problemas que hacen uso de los mismos y ejemplos que solamente hacen uso de funciones que existen solamente para un tipo de dato específico.

## Compilación y ejecución
#### Compilación
    g++ EjemploTipos.cpp -std=c++17 -o EjemploTipos.exe

#### Ejecución
    ./EjemploTipos.exe