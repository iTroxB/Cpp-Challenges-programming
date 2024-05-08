# I. Fundamentos de C++

- Lenguaje compilado
- Fuertemente tipado (el tipo de dato de una variable no se puede cambiar tras definirlo)
- Estáticamente tipado (la verificación del programa se hace al compilar y no al ejecutar)


## 1. Tipos de archivos

### a. Headers

	- Los headers o cabeceras contienen definiciones de tipos de datos, interfaces de funciones, variables, constantes, entre otras sentencias de lenguaje.
	- Posee extensión `.hpp`
		- header.hpp

### b. Código fuente

	- Es el código raíz de nuestro programa, donde se implementan el flujo declarado en este y se utilizan las interfaces de funciones definidas en los headers.
	- Posee extensión `.cpp`
		- main.cpp

### c. Static library

	- Una static library o librería estática es una colección de código fuente tercerizado y específico que realiza ciertas acción específica de forma predeterminada.
	- Posee extensión `.a`
		- libc.a

### d. Dynamic library

	- Una dynamic library o librería dinámica es una colección de código fuente tercerizado y específico que realiza ciertas acción específica de forma predeterminada, que varía de un sistema operativo a otro.
	- En **Windows** posee extensión `.dll`
		- libc.dll
	- En **Linux** posee extensión `.so`
		- libc.so


## 2. Proceso de compilación

![[Pasted image 20240504005317.png]]


## 3. Sintaxis básica

- Todo programa en C++ (main.cpp) comienza con las directivas de preprocesado.
- Una directiva de preprocesado es aquella que se resuelve en el paso de preprocesamiento (código fuente extra de extensión .hpp, que posee macros de procesamiento, entre otros).
- La más importante es `include`

```C++
#include <iostream> 
```

- El punto de inicio fundamenta de todo programa en C++ es la función **main**.
- La función **main** posee todo el flujo principal del programa, y se puede declarar de 3 formas distintas:

### a. Función main que devuelve un valor entero (int main()):

	- Es la forma más común para definir la función **main** y se utiliza cuando el programa necesita devolver un código de salida específico. El valor devuelto por **main** se puede utilizar para indicar el estado de ejecución del programa a otros programas o al sistema operativo.

```C++
int main() {
  // ... código del programa ...
  return 0;
}
```

### b. Función main que no devuelve ningún valor (void main()):

	- Se utiliza cuando el programa no necesita devolver un código de salida específico. Es común en programas simples o cuando el código de salida no es relevante.

```C++
void main() {
  // ... código del programa ...
}
```

### c. Función main con argumentos de línea de comandos (int main(int argc, char \*argv[])):

	- Esta forma incluye dos parámetros adicionales: `argc` y `argv`. Estos parámetros se utilizan para acceder a los argumentos entregados a través de la línea de comandos al programa al ejecutarlo.

```C++
int main(int argc, char *argv[]) {
  // ... código del programa que utiliza argc y argv ...
  return 0;
}
```

- Para imprimir un mensaje en pantalla en C++ se utiliza la herramienta `cout`, la cual pertenece al ámbito **std**, acompañado por el operador `::`.
- **std** se refiere a que la herramienta es parte del estándar de C++, y con `::` asignamos que la herramienta siguiente pertenece a dicho estándar.

```C++
int main() {
	std::cout << "Hello World!\n";
	return 0;
}
// ... resto del código
```

- El operador `<<` indica que lo que este del lado derecho de este se enviará a la función del lado izquierdo para ser procesado a la salida estándar del sistema (stdout).
- `return 0;` indica al sistema que no ha ocurrido ningún error durante la compilación y ejecución.


## 4. Tipos de datos

### a. Char

	- Representan caracteres individuales.
	- Ejemplos: char, unsigned char
	- Se declaran entre comillas simples: 'a'

### b. String

	- Representan una cadena de caracteres
	- Ejemplos: string, char
	- Se declara entre comillas dobles: "Hola mundo!"

### c. Enteros

	- Representan números enteros
	- Ejemplos: int, short, long, long long

#### d. Float

	- Representan números con punto decimal
	- Ejemplos: float, double, long double

### e. Booleano

	- Representa valores lógicos (True o False)
	- Ejemplo: bool
	- Operaciones booleanas: AND (&&), OR (||), NOT (!)

- De forma nativa C++ printea el valor de un booleano como 1 o 0. Si se quiere mostrar el valor true o flase se debe utilizar la función **std::boolalpha**

```C++
#include <iostream>

int main() {
	...
	std::cout << std::boolalpha;
	std::cout << true << "\n";
	std::cout << (true || false) << "\n";
    return 0;
}
```

- Para concatenar al **stdout** mas de un tipo de dato se utiliza mas de un operador `<<`

```C++
int main() {
	std::cout << 5 * 2 << "\n";
	return 0;
}
```


## 5. Variables

- Espacio dinámico en memoria que permite almacenar datos
- Para definir una variable se debe seguir la siguiente sintaxis

```C++
int main() {
	int age; // Variable declarada sin asignación de un valor
    float price = 35.3f; // Variables con valor declarado
    bool is_true = true;
    char c = 'a';
    
    return 0;
}
```

- Al estandarizar el valor de una variable pasa a ser una **constante**, y su valor no puede volver a cambiar dentro del flujo del programa.

- Existen 2 tipos de contantes:
	- **Constante dinámica o de tiempo de ejecución (const):** el valor de la constante se evalúa durante la ejecución del programa.
	- **Constante estática de compilación (constexpr):** el valor de la constante se evalúa durante el tiempo de compilación del programa.

```C++
int main() {
	const int min_age = 18;
	contexpr int max_age = 60;
	return 0;
}
```

- Se pueden guardar datos recopilados desde el stdin en una variable.
- Para recopilar estos datos se usa la función del estandar de C++ `cin`, luego de **std::**. Además, el operador ahora se invierte, siendo `>>` en vez de `<<`, ya que el contenido de`cin` se guardará en al variable designada.

```C++
int main() {
	int age;

	std::cout << "Ingresa tu edad: ";
	std::cin >> age;
	std::cout << "Tienes " << age << " años.\n";
	return 0;
}
```

- En C++ existen las referencias, que serían como los punteros.
- La **referencia** es un tipo de variable especial, la cual obligatoriamente debe estar asociada a una variable oficial, ya que ejecutará las mismas acciones de esta.
- A una referencia no se le asigna un tipo de dato convencional, ya que toma el valor de la variable a la que está referenciando.
- Se declara como una variable, pero acompañando el tipo de dato con el carácter **&** y definiendo el valor como la variable apuntada.

```C++
int main() {
	int age = 20; // Variable age
	int& age_ref = age; // Referencia de age
	return 0;
}
```

- Por otro lado, puedo declarar un valor específico a la referencia, el cual modificará el valor de la variable original.

```C++
int main() {
	int age;
    int& age_ref = age;
    
    std::cout << "Ingresa tu edad: ";
    std::cin >> age;
    std::cout << "Tienes " << age << " años.\n";
    std::cout << "La referencia de age es " << age_ref << "\n";

	age_ref = 15;
    std::cout << "La nueva referencia de age es " << age_ref << "\n";
    std::cout << "La nueva edad es " << age << "\n";
}
```


## 6. Convertir tipos de datos

- Al dividir 2 valores enteros, si el resultado es un decimal, solo se mostrará la parte entera.
- Para poder ver el resultado completo en reales, puedo convertir de forma temporal el tipo de dato numérico de **int** a **float**

```C++
int main() {
	std::cout << (float)x / (float)y << "\n";
}

int main() {
	std::cout << float(x) / float(y) << "\n";
}
```

- Ambas formas están correctas, pero de esta forma es inseguro, ya que cualquier dato será convertido de forma forzada, sin importar si eran datos o cadenas de caracteres.
- Es por esto que C++ nos provee una forma segura.
- Convertirá los tipos de datos solo si estos exclusivamente tienen relación entre si, y lo hará durante el tiempo de compilación.
- Para esto utiliza la función **static_cast<>**
- Con convertir uno de los 2 factores, el resultado se convierte automáticamente.

```C++
int main() {
    std::cout << static_cast<float>(x) / static_cast<float>(y) << "\n";
    return 0;
}

int main() {
    std::cout << static_cast<float>(x) / y << "\n";
    return 0;
}
```

- Podemos modificar el valor de una constante (es poco común), o transformar algo no constante en constante.
- Para cambiar el valor de una constante usamos la función **const_cast**
- También podemos convertir con **const_cast** algo no constante en constante.

```C++
int main() {
    const int min_age = 18;
    int& min_age_ref = const_cast<int&>(min_age);
    min_age_ref = 19;
    
    std::cout << "La nueva edad mínima es " << min_age_ref << "\n";
    return 0;
}
```


## 7. Inferir tipos de datos

- La inferencia de tipos es dejar que el compilador decida de que tipo es mi variable.
- Para esto se utiliza la palabra reservada **auto**
- En C y C++ los datos numéricos pueden ser **int** o **float**, y estos poseen variaciones para: tener o no signop, para poseer cadenas numéricas mas largas o mas cortas, etc

| **Tipo de dato**   | **Descripción**                        | **Tamaño (bytes)** | **Rango de valores**                                                                                        | **Uso típico**                                                                                        |
| ------------------ | -------------------------------------- | ------------------ | ----------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------- |
| char               | Un solo carácter                       | 1                  | -128 a 127 (sin signo)                                                                                      | Almacenar caracteres individuales, como letras, números y símbolos.                                   |
| unsigned char      | Un solo carácter sin signo             | 1                  | 0 a 255                                                                                                     | Almacenar caracteres individuales con valores positivos, como códigos ASCII.                          |
| short              | Número entero corto                    | 2                  | -32,768 a 32,767                                                                                            | Almacenar valores enteros pequeños que no requieren mucha memoria.                                    |
| unsigned short     | Número entero corto sin signo          | 2                  | 0 a 65,535                                                                                                  | Almacenar valores enteros pequeños positivos que no requieren mucha memoria.                          |
| int                | Número entero                          | 4                  | -2,147,483,648 a 2,147,483,647                                                                              | Almacenar la mayoría de los valores enteros que se encuentran en programas típicos.                   |
| unsigned int       | Número entero sin signo                | 4                  | 0 a 4,294,967,295                                                                                           | Almacenar valores enteros positivos que no requieren un signo negativo.                               |
| long               | Número entero largo                    | 4 o 8              | -2,147,483,648 a 2,147,483,647 (32 bits) o -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807 (64 bits) | Almacenar valores enteros grandes que no caben en un tipo int.                                        |
| unsigned long      | Número entero largo sin signo          | 4 o 8              | 0 a 4,294,967,295 (32 bits) o 0 a 18,446,744,073,709,551,615 (64 bits)                                      | Almacenar valores enteros grandes positivos que no requieren un signo negativo.                       |
| long long          | Número entero largo largo              | 8                  | -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807                                                      | Almacenar valores enteros extremadamente grandes que no caben en tipos de datos enteros más pequeños. |
| unsigned long long | Número entero largo largo sin signo    | 8                  | 0 a 18,446,744,073,709,551,615                                                                              | Almacenar valores enteros extremadamente grandes positivos que no requieren un signo negativo.        |
| float              | Número real de coma flotante simple    | 4                  | Aproximadamente -3.40282e+38 a 3.40282e+38                                                                  | Almacenar números reales con un rango y precisión moderados.                                          |
| double             | Número real de coma flotante doble     | 8                  | Depende de la implementación del compilador                                                                 | Almacenar números reales con un rango y precisión altos.                                              |
| long double        | Número real de coma flotante extendida | 8 o 16             | Depende de la implementación del compilador                                                                 | Almacenar números reales con la mayor precisión posible en un sistema determinado.                    |
- Para declarar variables que deban ser inferidas, en el caso de las `float` se les debe agregar una `f` al final.

```C++
int main() {
	auto x = 10.0f; // tipo float
	auto y = 10.0; // infiere doble no float
	return 0;
}
```

- Para declarar variables de un tipo especial, se puede al igual que para las float, indicar con un finalizador de cadena el tipo de dato que son

```C++
int main() {
	auto x = 1US; // unsigned short
	auto y = 15.5L; // long
	return 0;
}
```



---

# II. Estructuras de decisión en C++


## 1. Ámbitos

- Un ámbito en un bloque de código encapsulado entre llaves `{ }`, que posee un ciclo de vida independiente al de su exterior, en donde se ejecuta cierto flujo de código que solo existe y es válido dentro de este.
- La función **main** es un ámbito, y todas la variables y constantes declaradas dentro de este ámbito solo existen allí.

```C++
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "X in main: " << x << endl;
    {
        int x = 5;
        cout << "X in first scope: " << x << endl;
        {
            int x = 5;
            cout << "X in second scope: " << x << endl;
        }
    }
    return 0;
}
```

- La función **std::endl** o **endl** cumple la misma función de salto de línea que `\n`
[]()

## 2. Condicionales

- Una condicional permite ejecutar un bloque de código cuando ocurre una acción específica, la cual es determinada por lógica booleana **True** o **False**.
- Las condicionales se definen con la palabra clave **if**
- Si la comparativa realizada en los argumentos del **if** da como resultado **true**, entonces se ejecuta el bloque de código de la condicional.
- Si por el contrario el resultado es **false**, entonces continua con el flujo normal del programa, ingresando a un **else if** o finiquitando la condicional con un **else**.

```C++
#include <iostream>
using namespace std;

int main() {
    
    constexpr int legal_age = 18;
    int age;

    cout << "Introduzca la edad del comprador: ";
    cin >> age;

    if (age >= legal_age) {
        cout << "El comprador puede adquirir las bebidas\n";
    } else {
        cout << "El comprador no puede adquirir las bebidas\n";
    }

    cout << "El comprador terminó sus compras\n";

    return 0;
}
```

```C++
#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Introduzca su edad: ";
    cin >> age;

    if (age < 12) {
        cout << "El usuario es un niño\n";
    } else if (age < 18) {
        cout << "El usuario es adolecente\n";
    } else if (age < 60) {
        cout << "El usuario es un adulto\n";
    } else {
        cout << "El usuario es de la tercera edad\n";
    }

    return 0;
}
```


## 3. Switch

- Tipo de condicional que simula la interacción de un **if**, pero de otra forma.
- Generalmente, el **switch** se utiliza cuando la cadena de **if** anidados crece demasiado.

```C++
int main() {
    char opt;

    cout << "1. Opción 1 \n";
    cout << "2. Opción 2 \n";
    cout << "3. Opción 3 \n";
    cout << "4. Opción 4 \n";
        cout << "Ingrese una opción: ";
    cin >> opt;

    switch (opt) {
        case '1':
            cout << "A seleccionado la opción 1 \n";
            break;
        case '2':
            cout << "A seleccionado la opción 2 \n";
            break;
        case '3':
            cout << "A seleccionado la opción 3 \n";
            break;
        case '4':
            cout << "A seleccionado la opción 4 \n";
            break;
        default:
            cout << "Opción inválida \n";
            break;
    }
```

- Para definir una condición que evalué el resto de posibilidades fuera de la condicional se utiliza la palabra clave **default**
- Para romper el flujo del programa al obtener la condición necesaria, en cada case se utiliza la palabra clave **break**
- Para la sentencia **case** utilizada como decisión en cada **switch** solo de deben escribir **int** y/o **char**.

## Ejercicio: Break the code

- Crear un código que permita comparar el resultado del ingreso de 3 números con uno calculado internamente por el programa.
- La directiva de preprocesado `#include <stdlib>` permite entre otras muchas cosas, la generación de números aleatorios con la sentencia **rand()**.
- Si se quieren generar números aleatorios entre un rango específico, se define a través de la función módulo **%**
- Cuando se le asigna un valor random a una constante, esta no puede ser **constexpr**, sino que solamente **const**.

```C++
...
	const int = rando() % 10;
	// Crea npumeros aleatorios del 0 al 9
...
```

- El problema de **rand** es que solo aleatoriza el valor una vez. Para aleatorizar siempre la creación de un nuevo valor se utiliza la función **srand(time(nullptr))**

```C++
...
	srand(time(nullptr));
    const int a = (rand() % 5) +1;
    // Para que no de 0 algún número
...
```



---

# III. Estructuras de repetición en C++

## 1. While

- Permite repetir una acción hasta que una condición sea **true**
- La variable de control siempre debe estar inicializada antes de comenzar el ciclo

```C++
#include <iostream>
using namespace std;

int main() {
    char harry_got_message = 'N';
    
    while (harry_got_message == 'N') {
        cout << "No debo decir mentiras\n";
        cout << "Harry aprendió la lección? ";
        cin >> harry_got_message;
    }

    cout << "Castigo completado\n";
    return 0;
}
```

- Si la condicional se define directamente como **true**, se puede generar un ciclo infinito.
- Es por eso que se debe saber manejar el flujo de un **while true**
- Para controlar un **while true**, internamente se debe utilizar un **if** para romper la ejecución del bloque a través de un **break**

```C++
#include <iostream>
using namespace std;

int main() {

    while (true) {
        char harry_got_message = 'N';
        cout << "No debo decir mentiras\n";
        cout << "Harry aprendió la lección? ";
        cin >> harry_got_message;
        if (harry_got_message == 'S') {
            break;
        }
    }

    cout << "Castigo completado\n";
    return 0;
}
```

## 2. Do while

- El bucle **do while** ejecuta una vez un bloque de código y pregunta a la condicional de while si debe continuar. SI la respuesta es **true**, el ciclo prosigue. Si la respuesta es **false**, el ciclo finaliza en el while.
- Así se garantiza que al menos el bucle se ejecuta una vez.
- La variable de control no necesariamente debe estar inicializada antes de comenzar el ciclo. Basta solo con declararla.

```C++
#include <iostream>
using namespace std;

int main() {
    char harry_got_message;

    do {
        cout << "No debo decir mentiras\n";
        cout << "Harry aprendió la lección? ";
        cin >> harry_got_message;
    } while (harry_got_message != 'S');

    cout << "Castigo completado\n";
    return 0;
}
```

- El **do while** es muy utilizado en aplicaciones con menú.

```C++
#include <iostream>
using namespace std;

int main() {
    int opt;

    do {
        cout << "\n" << "bugHunterx\n";
        cout << "1. Opción 1 \n";
        cout << "2. Opción 2 \n";
        cout << "3. Opción 3 \n";
        cout << "4. Opción 4 \n";
        cout << "5. Salir \n";
        cout << "Ingrese una opción: ";
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "A seleccionado la opción 1 \n";
                break;
            case 2:
                cout << "A seleccionado la opción 2 \n";
                break;
            case 3:
                cout << "A seleccionado la opción 3 \n";
                break;
            case 4:
                cout << "A seleccionado la opción 4 \n";
                break;
            case 5:
                break;
            default:
                cout << "Opción inválida \n";
                break;
        }
    } while (opt != 5);
    
    cout << "Adiós!\n";
    
    return 0;
}
```

## 3. For

- Bucle utilizado en los casos cuando de antemano sabemos las veces que necesitamos repetir el bloque de código.
- Se utilizan 3 designaciones: un **contador**, un **comparador booleano** y un **acumulador**.
- Los acumuladores se pueden definir de 4 formas distintas:

```C++
	i = i + 1;
	i += 1;
	i++;
	++i;
```

- Existe una palabra clave utilizada en los 3 bucles, que permite continuar el flujo de este en función de si cumple o no una condición específica. Esta es **continue**.

```C++
// Solo impares
#include <iostream>
using namespace std;

int main() {
    constexpr int num_lines = 10;

    for (int i = 0; i < num_lines; i++) {
        if (i % 2 == 0){
            continue;
        }
        cout << i << ". No debo patinar dentro de la escuela\n";
    }

    cout << "Castigo completado!\n";
    return 0;
}
```

## 4. Ciclos anidados

- En cualquier tipo de herramienta interna de C++ como condicionales o bucles podemos insertar un bloque de código con alguna de estas para anidarlas.

```C++
#include <iostream>
using namespace std;

int main() {
    constexpr int num_repeat = 5;
    constexpr int num_circuit = 4;

    for (int i = 0; i < num_circuit; i++) {
        cout << "Ejecutando circuito número " << i + 1 << "\n";
        for (int j = 0; j < num_repeat; j++) {
            cout << "\t Ejecutando ejercicio número " << j + 1 << "\n";
        }
    }

    return 0;
}
```

## Ejercicio: Mejora Break the code

```C++
#include <iostream>

#include <cstdlib> // Permite entre otras cosas, generar números aleatorios
using namespace std;
int main() {

    srand(time(nullptr));
    const int a = (rand() % 5) +1; // Para que no de 0 algún número
    const int b = (rand() % 5) +1;
    const int c = (rand() % 5) +1;
    const int sum = a + b + c;
    const int prod = a * b * c;
    
    cout << "Debes adivinar el código de tres números enteros\n";
    cout << "La suma de los números es: " << sum << "\n";
    cout << "El producto de los números es: " << prod << "\n";

    int in_a;
    int in_b;
    int in_c;
    int counter = 3;

    do {
        cout << "Introduzca el primer número: ";
        cin >> in_a;
        cout << "Introduzca el segundo número: ";
        cin >> in_b;
        cout << "Introduzca el tercer número: ";
        cin >> in_c;

        int in_sum = in_a + in_b + in_c;
        int in_prod = in_a * in_b * in_c;

        if (in_sum == sum && in_prod == prod){
            cout << "El código introducido es correcto\n";
            break;
        } else {
            counter--;

            cout << "El código introducido es incorrecto";
            if (counter > 0) {
                cout << ", intente denuevo.\n";
            } else {
                cout << ".\n";
            }

            cout << "Le quedan " << counter << " oportunidad";
            if (counter == 1) {
                cout << ".\n";
            } else {
                cout << "es.\n";
            }
        }
    } while (counter > 0);

    if (counter == 0) {
        cout << "Has perdido\n";
    } else {
        cout << "Has ganado\n";
    }

    return 0;
}
```



---

# IV. Funciones en C++

## 1. Funciones

- Una función es un bloque de código aislado del flujo normal, que realiza sus propias acciones internas, y que puede ser llamado desde otros sectores del código cuando sea necesario para interactuar con el programa, la cual siempre retorna un valor a la salida.
- La sintaxis de una función que no recibe parámetros de entrada es:

```C++
int func() {
	// code
	return 0;
}
```

- Por otro lado, la sintaxis de una función que recibe parámetros de entrada es:

```C++
int func(int a, int b) {
	// code a, b
	return c;
}
```

- En otro aspecto, la función **void** o **procedimiento** corresponde a un tipo de función que no retorna ningún tipo de dato en su salida, y que solo ejecuta cierto flujo interno al momento de ser llamada (puede o no recibir argumentos).
- La sintaxis de una función que recibe parámetros de entrada es:

```C++
void func() {
	// code
}
```

## 2. Parámetros por copia y referencia

- Asignación de parámetros en control de funciones por copia y referencia.

```C++
#include <iostream>
using namespace std;

void param_by_copy(int x) {
    x = 10;
}

void param_by_ref(int& x) {
    x = 10;
}

int main() {

    int var  = 5;

    cout << "Var antes de param_by_copy: " << var << endl;
    param_by_copy(var);
    cout << "Var después de param_by_copy: " << var << endl;
    param_by_ref(var);
    cout << "Var después de param_by_ref: " << var << endl;
    
    return 0;
}
```

## Ejercicio: Modularizar Break the code

```C++
#include <iostream>

#include <cstdlib> // Permite entre otras cosas, generar números aleatorios
using namespace std;

void init(int& s, int& p) {
    
    srand(time(nullptr));
    const int a = (rand() % 5) +1; // Para que no de 0 algún número
    const int b = (rand() % 5) +1;
    const int c = (rand() % 5) +1;
    s = a + b + c;
    p = a * b * c;
    
    cout << "Debes adivinar el código de tres números enteros\n";
    cout << "La suma de los números es: " << s << "\n";
    cout << "El producto de los números es: " << p << "\n";
}


int main() {

    int sum;
    int prod;

    init(sum, prod);

    int in_a;
    int in_b;
    int in_c;
    int counter = 3;

    do {
        cout << "Introduzca el primer número: ";
        cin >> in_a;
        cout << "Introduzca el segundo número: ";
        cin >> in_b;
        cout << "Introduzca el tercer número: ";
        cin >> in_c;

        int in_sum = in_a + in_b + in_c;
        int in_prod = in_a * in_b * in_c;

        if (in_sum == sum && in_prod == prod){
            cout << "El código introducido es correcto\n";
            break;
        } else {
            counter--;

            cout << "El código introducido es incorrecto";
            if (counter > 0) {
                cout << ", intente denuevo.\n";
            } else {
                cout << ".\n";
            }

            cout << "Le quedan " << counter << " oportunidad";
            if (counter == 1) {
                cout << ".\n";
            } else {
                cout << "es.\n";
            }
        }
    } while (counter > 0);

    if (counter == 0) {
        cout << "Has perdido\n";
    } else {
        cout << "Has ganado\n";
    }

    return 0;
}
```

## 3. Funciones anónimas

- Una función anónima refiere un bloque de código que solo se utiliza una vez, la cual puede ser llamada desde otra función para realizar una tarea específica.
- A través de la palabra clave **auto** se define como una variable convencional.

```C++
#include <iostream>
using namespace std;

int main() {
    auto sum = [] (int a, int b) {
        int result = a + b;
        // return a + b;
        return result;
    };

    cout << "5 + 3 = " << sum(5, 3) << endl;
    return 0;
}
```

- En los corchetes le puedo asignar una función que capture el entorno, para ingresar otra función que por ejemplo imprima el mensaje.

```C++
#include <iostream>
using namespace std;

int main() {
    auto sum = [] (int a, int b) {
        int result = a + b;
        // return a + b;
        return result;
    };

    int result = sum(5,3);
    
    auto print_result = [result] () {
        cout << "5 + 3 = " << result << endl;
    };

    print_result();

    return 0;
}
```

- Tambien se puede capturar el entorno completo desde la función anónima

```C++
#include <iostream>
using namespace std;

int main() {
    auto sum = [] (int a, int b) {
        int result = a + b;
        // return a + b;
        return result;
    };

    int x = 5;
    int y = 3;

    auto use_sum_and_print_result = [sum, x, y] () {
        cout << x << " + " << y << " = " << sum(x, y) << endl;
    };

    use_sum_and_print_result();

    return 0;
}
```

## 4. Agrupando funciones en espacios de nombres

- Se puede dar la situación en donde creemos una función que ya exista en la librería estándar de C++ ó en una librería de terceros que estemos utilizando y nos genere conflicto.
- Para garantizar que nuestras funciones sean únicas se utiliza el concepto de **espacio de nombres**.
- Es muy similar a utilizar módulos (utilizar `std::cout` implica que la variable `cout` está dentro de un espacio de nombre llamado `std`)
- Siempre utilizar el espacio de nombre directo sobre la variable y no general sobre el programa.

```C++
//use namespace std;
...SNIP...
	std::cout << "Hello!" << endl;
...
```

- Un espacio de nombre sirve para agrupar conceptos fundamentales dentro de un programa en particular.
- Se definen a través de la palabra clave **namespace**

```C++
#include <iostream>

namespace Math {
    int sum(int a, int b) {

        return a + b;
    }

    int abs(int x) {

        if (x < 0) {
            return -x;
        } else {
            return x;
        }
    }
}

int main() {

    std::cout << "5 + 3 = " << Math::sum(5, 3) << "\n";
    std::cout << "|-5| = " << Math::abs(-5) << "\n";
    return 0;
}
```

## 5. Anidando espacios de nombres

- La anidación de espacios de nombre se refiere a un espacio padre que albergue mucho espacios hijos, y así sucesivamente.

```C++
#include <iostream>

namespace myNamespace {

    int increment(int x) {
        return x + 1;
    }

    namespace Math {
        int sum(int a, int b) {
            return a + b;
        }

        int abs(int x) {
            if (x < 0) {
                return -x;
            } else {
                return x;
            }
        }
    }

    namespace Output {
        void print_hello_world() {
            
            std::cout << "Hello, World! \n";
        }

        void greet(const char* name) {
            std::cout << "Hello " << name << "!\n";
        }
    }
}

int main() {

    std::cout << "5 + 1 = " << myNamespace::increment(5) << "\n";
    myNamespace::Output::greet("Javier");
    std::cout << "9 + 1 = " << myNamespace::Math::sum(9, 1) << "\n";

    return 0;
}
```

## 6. Creación de bibliotecas para C++

- Creación de archivos de cabecera **.hpp**.
- Para crear una cabecera, se comienza por declarar una directiva de preprocesador, la cual se encarga de que, indirectamente las veces que se llame desde diferentes partes del programa, esta solo se incorpore una sola vez, dando estabilidad y disponibilidad inmediata.
- Esta directiva se llama **ifndef** (If Not Defined)
- Al ser una definición booleana, la primera vez en procesar lee el fichero ya que la respuesta es True. En las demás ocasiones no, ya que al ya leerlo la primera vez, el if se vuelve falso y lo anula.
- Dentro del bloque de código, al definir una función, esta no se define por completo, si no que solamente se define la interfaz de esta.
- Se diferencia entre declarar la función (sin valores asignados pero si tipo de dato) y definir la función (con tipo de dato y valor asignado).
- En el archivo **.hpp** solo de fine la declaración de la función. La definición del cuerpo de al función se declara en un archivo **.cpp** de nombre como el `namespace`. (Si el namespace se llama `Math`, el archivo fuente de la cabecera se debe llamar `math.cpp`)

- `math.hpp`

```C++
#ifndef MATH_H
#define MATH_H

namespace Math {

    int sum(int, int);
    int abs(int);
}
#endif
```

- `math.cpp`

```C++
#include <iostream>
#include "math.hpp"

namespace Math {

    int sum(int x, int y) {
        return x + y;
    }

    int abs(int x) {
        if (x < 0) {
            return -x;
        } else {
            return x;
        }
    }
}
```

- `06_headers.cpp` -> principal file

```C++
#include <iostream>
#include "math.hpp"

int main() {

    std::cout << "5 + 3 = " << Math::sum(5, 3) << "\n";
    std::cout << "|-5| = " << Math::abs(-5) << "\n";
    return 0;
}
```

- Al compilar `06_headers.cpp` la primera vez arrojará un error:

```shell
bash> g++ 06_headers.cpp -o headers
/usr/bin/ld: /tmp/cczxVYa9.o: in function `main':
06_headers.cpp:(.text+0x30): undefined reference to `Math::sum(int, int)'
/usr/bin/ld: 06_headers.cpp:(.text+0x75): undefined reference to `Math::abs(int)'
collect2: error: ld returned 1 exit status
```

- Esto se presenta debido a que no conoce el contenido del fichero `math.cpp`. Para solucionar esto, `math.cpp` se debe compilar de una forma especial, de la cual se obtiene un compilado con extensión `.o`.

```shell
bash> g++ -c math.cpp
bash> ls -ls

4 -rw-r--r-- 1 user user 2232 data day 18:30 math.o
```

- Si al comando se le agrega la flag -o se puede definir el nombre del fichero .o

```shell
bash> g++ -c math.cpp -o hola.o
bash> ls -ls

4 -rw-r--r-- 1 user user 2232 data day 18:31 hola.o
```

- Para compilar el archivo principal, se debe incorporar a la compilación el fichero `.o` compilado recientemente.

```shell
bash> g++ 06_headers.cpp -o headers math.o
```
