// ### Semana 2: Conceptos Intermedios

// **Día 8-9: Funciones**
// - Declaración y definición de funciones
// - Paso de parámetros y retorno de valores
// - Alcance y vida de las variables (variables locales y globales)
// - Recursión

// **Día 10-11: Arrays y Cadenas**
// - Arrays unidimensionales y multidimensionales
// - Manipulación de cadenas de caracteres
// - Funciones estándar para cadenas (strlen, strcpy, strcat, strcmp)

// **Día 12-13: Punteros**
// - Concepto de punteros y dirección de memoria
// - Operadores de punteros: &, *
// - Punteros y arrays
// - Punteros a funciones

// **Día 14: Estructuras y Uniones**
// - Declaración y uso de estructuras
// - Anidación de estructuras
// - Uso de typedef
// - Uniones y diferencias con estructuras
/********************************************************/
// Día ->  Funciones
// - Declaración y definición de funciones
// - Paso de parámetros y retorno de valores
// - Alcance y vida de las variables (variables locales y globales)
// - Recursión
// #include <stdio.h>

// // Declaración de la función
// int sumar(int a, int b);

// int main()
// {
//     int x = 5, y = 3;
//     int resultado = sumar(x, y);
//     printf("La suma de %d y %d es %d\n", x, y, resultado);

//     print_mensaje("MENSAJE");

//     return 0;
// }
// void print_mensaje(char mensaje)
// {
//     printf(mensaje);
// }
// // Definición de la función
// int sumar(int a, int b)
// {
//     int resultado = a + b;
//     return resultado;
// }

/********************************************************/

// Día -> Arrays y Cadenas
// - Arrays unidimensionales y multidimensionales
// - Manipulación de cadenas de caracteres
// - Funciones estándar para cadenas (strlen, strcpy, strcat, strcmp)
// #include <stdio.h>
// #include <string.h>  // Necesario para funciones de cadena

// int main() {
//     // Declaración e inicialización de una cadena de caracteres
//     char cadena[] = "Hola, Mundo!";

//     // Imprimiendo la cadena
//     printf("Cadena original: %s\n", cadena);

//     // Longitud de la cadena
//     int longitud = strlen(cadena);
//     printf("Longitud de la cadena: %d\n", longitud);

//     // Copia de cadenas
//     char otraCadena[20];
//     strcpy(otraCadena, cadena);
//     printf("Copia de la cadena: %s\n", otraCadena);

//     // Concatenación de cadenas
//     strcat(otraCadena, " Qué tal?");
//     printf("Cadena concatenada: %s\n", otraCadena);

//     // Comparación de cadenas
//     if (strcmp(cadena, otraCadena) == 0) {
//         printf("Las cadenas son iguales.\n");
//     } else {
//         printf("Las cadenas son diferentes.\n");
//     }

//     return 0;
// }

/********************************************************/
// Día -> Punteros
// - Concepto de punteros y dirección de memoria
// - Operadores de punteros: &, *
// - Punteros y arrays
// - Punteros a funciones

// #include <stdio.h>

// // Función suma
// int suma(int a, int b)
// {
//     return a + b;
// }

// // Función resta
// int resta(int a, int b)
// {
//     return a - b;
// }

// int main()
// {
//     int numero = 10; // Variable entera
//     int *puntero;    // Declaración de un puntero a entero

//     puntero = &numero; // Asignación de la dirección de memoria de 'numero' al puntero

//     printf("Valor de 'numero': %d\n", numero);
//     printf("Dirección de 'numero': %p\n", &numero);
//     printf("Valor almacenado en el puntero: %d\n", *puntero);    // Acceso al valor apuntado por 'puntero'
//     printf("Dirección almacenada en el puntero: %p\n", puntero); // Dirección almacenada en el puntero

//     int numeros[] = {1, 2, 3, 4, 5}; // Array de enteros
//     int *puntero;                    // Puntero a entero

//     puntero = numeros; // 'numeros' es equivalente a '&numeros[0]'

//     printf("Primer elemento del array: %d\n", *puntero);        // Imprime el primer elemento del array
//     printf("Segundo elemento del array: %d\n", *(puntero + 1)); // Accediendo al segundo elemento usando aritmética de punteros

//     int (*puntero_funcion)(int, int); // Declaración de un puntero a función

//     puntero_funcion = suma; // Asignación del puntero a la función suma

//     printf("Resultado de suma: %d\n", puntero_funcion(5, 3)); // Llamada a la función a través del puntero

//     puntero_funcion = resta; // Ahora apunta a la función resta

//     printf("Resultado de resta: %d\n", puntero_funcion(5, 3)); // Llamada a la función resta a través del puntero

//     return 0;
// }

/********************************************************/

// Día -> Estructuras y Uniones**
// - Declaración y uso de estructuras
// - Anidación de estructuras
// - Uso de typedef
// - Uniones y diferencias con estructuras

// #include <stdio.h>

// // Declaración de estructuras anidadas
// struct Direccion
// {
//     char calle[50];
//     int numero;
// };

// struct Persona
// {
//     char nombre[50];
//     int edad;
//     struct Direccion direccion; // Estructura anidada
// };

// typedef struct
// {
//     char marca[20];
//     char modelo[20];
//     int anio;
// } Automovil;

// int main()
// {
//     // Declaración e inicialización de una variable de tipo struct Persona
//     struct Persona persona1 = {"Ana", 25, {"Calle Principal", 123}};

//     // Acceso a los miembros anidados de la estructura
//     printf("Nombre: %s\n", persona1.nombre);
//     printf("Edad: %d\n", persona1.edad);
//     printf("Dirección: %s, %d\n", persona1.direccion.calle, persona1.direccion.numero);

//     Automovil carro = {"Toyota", "Corolla", 2020};

//     // Acceso a los miembros de la estructura typedef
//     printf("Marca: %s\n", carro.marca);
//     printf("Modelo: %s\n", carro.modelo);
//     printf("Año: %d\n", carro.anio);

//     return 0;
// }
