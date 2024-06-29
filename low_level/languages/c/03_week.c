// ### Semana 3: Conceptos Avanzados

// **Día 15-16: Gestión de Memoria Dinámica**
// - malloc, calloc, realloc, free
// - Punteros nulos y manejo de errores de asignación de memoria
// - Creación y manipulación de estructuras dinámicas

// **Día 17-18: Archivos**
// - Lectura y escritura de archivos (fopen, fclose, fread, fwrite, fprintf, fscanf)
// - Modo texto y modo binario
// - Gestión de errores de E/S

// **Día 19-20: Preprocesador**
// - Directivas del preprocesador: #include, #define, #ifdef, #ifndef, #endif
// - Macros y funciones en línea
// - Condicionales de compilación

// **Día 21: Compilación y Depuración**
// - Proceso de compilación y enlazado
// - Uso de herramientas de depuración (gdb)
// - Gestión de errores y advertencias de compilación

/********************************************************/
// Día -> Gestión de Memoria Dinámica
// - malloc, calloc, realloc, free
// - Punteros nulos y manejo de errores de asignación de memoria
// - Creación y manipulación de estructuras dinámicas
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *puntero;

//     // Asignación de memoria usando malloc
//     puntero = (int *)malloc(5 * sizeof(int));

//     if (puntero == NULL)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         return 1;
//     }

//     // Uso del bloque de memoria
//     for (int i = 0; i < 5; i++)
//     {
//         puntero[i] = i + 1;
//         printf("%d ", puntero[i]);
//     }
//     printf("\n");

//     // Liberación de la memoria asignada
//     free(puntero);

//     int *puntero;

//     // Asignación de memoria usando calloc
//     puntero = (int *)calloc(5, sizeof(int));

//     if (puntero == NULL)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         return 1;
//     }

//     // Uso del bloque de memoria
//     for (int i = 0; i < 5; i++)
//     {
//         puntero[i] = i + 1;
//         printf("%d ", puntero[i]);
//     }
//     printf("\n");

//     // Liberación de la memoria asignada
//     free(puntero);

//     int *puntero;

//     // Asignación inicial de memoria usando malloc
//     puntero = (int *)malloc(5 * sizeof(int));

//     if (puntero == NULL)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         return 1;
//     }

//     // Uso del bloque de memoria inicial
//     for (int i = 0; i < 5; i++)
//     {
//         puntero[i] = i + 1;
//         printf("%d ", puntero[i]);
//     }
//     printf("\n");

//     // Reasignación de memoria usando realloc para expandir el bloque
//     puntero = (int *)realloc(puntero, 10 * sizeof(int));

//     if (puntero == NULL)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         return 1;
//     }

//     // Uso del bloque de memoria realocado
//     for (int i = 5; i < 10; i++)
//     {
//         puntero[i] = i + 1;
//         printf("%d ", puntero[i]);
//     }
//     printf("\n");

//     // Liberación de la memoria asignada
//     free(puntero);

//     return 0;
// }

/********************************************************/
// Día ->  Archivos
// - Lectura y escritura de archivos (fopen, fclose, fread, fwrite, fprintf, fscanf)
// - Modo texto y modo binario
// - Gestión de errores de E/S
// #include <stdio.h>

// int main()
// {
//     FILE *archivo;

//     // Apertura de un archivo para escritura en modo texto
//     archivo = fopen("ejemplo.txt", "w");

//     if (archivo == NULL)
//     {
//         printf("Error al abrir el archivo.\n");
//         return 1;
//     }

//     // Operaciones de escritura en el archivo
//     fprintf(archivo, "Hola, Mundo!\n");
//     fprintf(archivo, "Este es un ejemplo de escritura en archivo.\n");

//     // Cierre del archivo
//     fclose(archivo);

//     printf("Archivo escrito exitosamente.\n");

//     FILE *archivo;
//     char linea[100];

//     // Apertura de un archivo para lectura en modo texto
//     archivo = fopen("ejemplo.txt", "r");

//     if (archivo == NULL)
//     {
//         printf("Error al abrir el archivo.\n");
//         return 1;
//     }

//     // Lectura y muestra de líneas del archivo
//     while (fgets(linea, sizeof(linea), archivo))
//     {
//         printf("%s", linea);
//     }

//     // Cierre del archivo
//     fclose(archivo);

//     FILE *archivo;

//     // Ejemplo de apertura en modo binario para escritura
//     archivo = fopen("datos.bin", "wb");

//     if (archivo == NULL)
//     {
//         printf("Error al abrir el archivo.\n");
//         return 1;
//     }

//     int numeros[] = {1, 2, 3, 4, 5};

//     // Escritura en modo binario
//     fwrite(numeros, sizeof(int), 5, archivo);

//     // Cierre del archivo
//     fclose(archivo);

//     printf("Datos escritos en modo binario.\n");
//     FILE *archivo;
//     int numero;

//     // Apertura de un archivo para lectura en modo texto
//     archivo = fopen("datos.txt", "r");

//     if (archivo == NULL)
//     {
//         printf("Error al abrir el archivo.\n");
//         return 1;
//     }

//     // Lectura de un entero desde el archivo
//     if (fscanf(archivo, "%d", &numero) != 1)
//     {
//         printf("Error: No se pudo leer un entero desde el archivo.\n");
//         fclose(archivo);
//         return 1;
//     }

//     // Cierre del archivo
//     fclose(archivo);

//     printf("Número leído desde el archivo: %d\n", numero);
//     return 0;
// }

/********************************************************/
// Día -> Preprocesador**
// - Directivas del preprocesador: #include, #define, #ifdef, #ifndef, #endif
// - Macros y funciones en línea
// - Condicionales de compilación
// #include <stdio.h>

// // Definición condicional de DEBUG
// #define DEBUG

// // Función en línea para calcular el cuadrado de un número
// inline int cuadrado(int x)
// {
//     return x * x;
// }

// int main()
// {
// #ifdef DEBUG
//     printf("Depuración activada.\n");
// #endif

//     int a = 5;
//     int b = 3;

//     printf("El máximo entre %d y %d es %d.\n", a, b, MAX(a, b));
//     printf("El cuadrado de %d es %d.\n", a, CUADRADO(a));
//     printf("El cuadrado de %d es %d.\n", b, cuadrado(b));

//     return 0;
// }

/********************************************************/
