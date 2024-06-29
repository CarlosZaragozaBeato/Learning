// ### Semana 1: Fundamentos del Lenguaje C

// **Día 1-2: Introducción y Configuración del Entorno**
// - Historia y características de C
// - Instalación del compilador (GCC, MinGW, Code::Blocks)
// - Escribir y compilar tu primer programa ("Hola, Mundo")

// **Día 3-4: Sintaxis Básica y Tipos de Datos**
// - Variables y tipos de datos: int, float, char, double
// - Declaración y inicialización de variables
// - Constantes y modificadores de tipo

// **Día 5-6: Operadores y Expresiones**
// - Operadores aritméticos
// - Operadores de comparación y lógicos
// - Operadores bit a bit
// - Operadores de asignación y aritméticos compuestos

// **Día 7: Estructuras de Control**
// - Estructuras de control: if, else, switch
// - Bucles: for, while, do-while

/**********************************************************/
// **Día 1-2: Introducción y Configuración del Entorno**
// - Historia y características de C
// - Instalación del compilador (GCC, MinGW, Code::Blocks)
// - Escribir y compilar tu primer programa ("Hola, Mundo")
// #include <stdio.h>

// int main() {
//     printf("Hola, Mundo!\n");
//     return 0;
// }

/**********************************************************/
// **Día 3-4: Sintaxis Básica y Tipos de Datos**
// - Variables y tipos de datos: int, float, char, double
// - Declaración y inicialización de variables
// - Constantes y modificadores de tipo
// #include <stdio.h>

// #define EDAD 30
// #define PI 3.14159
// #define LETRA 'A'

// int main()
// {
//     int edad = 25;
//     int numero = -10;

//     printf("Mi edad es %d años.\n", edad);
//     printf("El número es %d.\n", numero);

//     float temperatura = 26.5;
//     float peso = 75.2;

//     printf("La temperatura es %.1f grados Celsius.\n", temperatura);
//     printf("El peso es %.1f kg.\n", peso);

//     char inicial = 'J';
//     char simbolo = '@';

//     printf("Mi inicial es %c.\n", inicial);
//     printf("El símbolo es %c.\n", simbolo);

//     double salario_mensual = 1850.50;
//     double pi = 3.14159265359;

//     printf("El salario mensual es %.2f euros.\n", salario_mensual);
//     printf("El valor de pi es %.4f.\n", pi);

//     // const int EDAD = 30;
//     // const float PI = 3.14159;
//     // const char LETRA = 'A';

//     // printf("Edad: %d\n", EDAD);
//     // printf("Valor de PI: %.2f\n", PI);
//     // printf("Letra inicial: %c\n", LETRA);

//     return 0;
// }

/**********************************************************/
// **Día 5-6: Operadores y Expresiones**
// - Operadores aritméticos
// - Operadores de comparación y lógicos
// - Operadores bit a bit
// - Operadores de asignación y aritméticos compuestos

// #include <stdio.h>

// int main()
// {
//     int a = 10, b = 3;
//     int suma = a + b;
//     int resta = a - b;
//     int multiplicacion = a * b;
//     int division_entera = a / b;
//     int resto = a % b;

//     printf("Suma: %d\n", suma);                       // Imprime 13
//     printf("Resta: %d\n", resta);                     // Imprime 7
//     printf("Multiplicacion: %d\n", multiplicacion);   // Imprime 30
//     printf("Division entera: %d\n", division_entera); // Imprime 3
//     printf("Resto: %d\n", resto);                     // Imprime 1

//     // Incremento y decremento
//     int x = 5;
//     x++; // Incremento, ahora x es 6
//     x--; // Decremento, ahora x es 5 nuevamente

//     int a = 10, b = 20;
//     if (a == b)
//     {
//         printf("a es igual a b.\n");
//     }
//     else
//     {
//         printf("a no es igual a b.\n");
//     }

//     if (a < b && b >= 20)
//     {
//         printf("a es menor que b y b es mayor o igual a 20.\n");
//     }

//     if (a != b || b > 30)
//     {
//         printf("a no es igual a b o b es mayor que 30.\n");
//     }

//     int edad = 25;
//     if (edad >= 18 && edad <= 30)
//     {
//         printf("La edad está entre 18 y 30 años.\n");
//     }

//     char letra = 'A';
//     if (letra == 'A' || letra == 'B')
//     {
//         printf("La letra es A o B.\n");
//     }

//     int valor = 0;
//     if (!valor)
//     {
//         printf("El valor es 0.\n");
//     }

//     // Operadores bit a bit
//     int a = 5; // 0101 en binario
//     int b = 3; // 0011 en binario

//     int andResultado = a & b;       // 0101 & 0011 = 0001 (1 en decimal)
//     int orResultado = a | b;        // 0101 | 0011 = 0111 (7 en decimal)
//     int xorResultado = a ^ b;       // 0101 ^ 0011 = 0110 (6 en decimal)
//     int complementoUnoA = ~a;       // ~0101 = 1010 (depende del tamaño del int)
//     int desplazamientoIzq = a << 2; // 0101 << 2 = 10100 (20 en decimal)
//     int desplazamientoDer = a >> 1; // 0101 >> 1 = 0010 (2 en decimal)

//     printf("AND: %d\n", andResultado);
//     printf("OR: %d\n", orResultado);
//     printf("XOR: %d\n", xorResultado);
//     printf("Complemento a Uno de a: %d\n", complementoUnoA);
//     printf("Desplazamiento a la Izquierda de a: %d\n", desplazamientoIzq);
//     printf("Desplazamiento a la Derecha de a: %d\n", desplazamientoDer);

//     int a = 10;
//     printf("Valor inicial de a: %d\n", a);

//     // Operadores aritméticos compuestos
//     a += 5; // a = a + 5;
//     printf("Después de a += 5: %d\n", a);

//     a -= 3; // a = a - 3;
//     printf("Después de a -= 3: %d\n", a);

//     a *= 2; // a = a * 2;
//     printf("Después de a *= 2: %d\n", a);

//     a /= 4; // a = a / 4;
//     printf("Después de a /= 4: %d\n", a);

//     a %= 2; // a = a % 2;
//     printf("Después de a %%= 2: %d\n", a);

//     return 0;
// }

/**********************************************************/
// **Día 7: Estructuras de Control**
// - Estructuras de control: if, else, switch
// - Bucles: for, while, do-while

// #include <stdio.h>

// int main()
// {
//     int edad = 25;

//     if (edad < 18)
//     {
//         printf("Eres menor de edad.\n");
//     }
//     else if (edad >= 18 && edad <= 65)
//     {
//         printf("Eres adulto.\n");
//     }
//     else
//     {
//         printf("Eres adulto mayor.\n");
//     }

//     int opcion = 2;

//     switch (opcion)
//     {
//     case 1:
//         printf("Seleccionaste la opción 1.\n");
//         break;
//     case 2:
//         printf("Seleccionaste la opción 2.\n");
//         break;
//     case 3:
//         printf("Seleccionaste la opción 3.\n");
//         break;
//     default:
//         printf("Opción no válida.\n");
//     }

//     // Imprimir los números del 1 al 5
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");

//     // Imprimir los números del 1 al 5 usando while
//     int i = 1;
//     while (i <= 5)
//     {
//         printf("%d ", i);
//         i++;
//     }
//     printf("\n");

//     int i = 1;
//     do
//     {
//         printf("%d ", i);
//         i++;
//     } while (i <= 5);
//     printf("\n");

//     return 0;
// }