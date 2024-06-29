#include <iostream>
#include <string>
using namespace std;

// int main() {
//     int numeros[5];
//     // Solicitar al usuario ingresar números
//     cout << "Ingrese 5 números enteros:" << endl;
//     for (int i = 0; i < 5; ++i) {
//         cout << "Número " << i + 1 << ": ";
//         cin >> numeros[i];
//     }
//     // Imprimir los números en orden inverso
//     cout << "Números en orden inverso:" << endl;
//     for (int i = 4; i >= 0; --i) {
//         cout << numeros[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// void contarYReemplazarA(string& cadena) {
//     int contador = 0;
//     for (char& c : cadena) {
//         if (c == 'a') {
//             ++contador;
//             c = 'x';
//         }
//     }
//     cout << "Cantidad de 'a' encontradas: " << contador << endl;
// }

// int main() {
//     string texto;
//     cout << "Ingrese una cadena de texto:" << endl;
//     getline(cin, texto);
//     contarYReemplazarA(texto);
//     cout << "Texto modificado: " << texto << endl;
//     return 0;
// }

// void intercambiar(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int num1 = 5, num2 = 10;
//     cout << "Valores iniciales: num1 = " << num1 << ", num2 = " << num2 << endl;
//     intercambiar(&num1, &num2);
//     cout << "Valores intercambiados: num1 = " << num1 << ", num2 = " << num2 << endl;
//     return 0;
// }

// int &mayor(int &a, int &b)
// {
//     return (a > b) ? a : b;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Ingrese dos números enteros:" << endl;
//     cin >> num1 >> num2;
//     int &numMayor = mayor(num1, num2);
//     cout << "El mayor número es: " << numMayor << endl;
//     return 0;
// }

// struct Libro {
//     string titulo;
//     string autor;
//     int añoPublicacion;
// };

// int main() {
//     Libro biblioteca[3];
//     // Ingresar información de los libros
//     for (int i = 0; i < 3; ++i) {
//         cout << "Ingrese título del libro " << i + 1 << ": ";
//         getline(cin, biblioteca[i].titulo);
//         cout << "Ingrese autor del libro " << i + 1 << ": ";
//         getline(cin, biblioteca[i].autor);
//         cout << "Ingrese año de publicación del libro " << i + 1 << ": ";
//         cin >> biblioteca[i].añoPublicacion;
//         cin.ignore();  // Limpiar el buffer de entrada
//     }
//     // Imprimir detalles de los libros
//     for (int i = 0; i < 3; ++i) {
//         cout << "\nLibro " << i + 1 << ":" << endl;
//         cout << "Título: " << biblioteca[i].titulo << endl;
//         cout << "Autor: " << biblioteca[i].autor << endl;
//         cout << "Año de publicación: " << biblioteca[i].añoPublicacion << endl;
//     }
//     return 0;
// }

// class Rectangulo
// {
// private:
//     float base;
//     float altura;

// public:
//     // Constructor
//     Rectangulo(float b, float a)
//     {
//         base = b;
//         altura = a;
//     }
//     // Métodos para calcular área y perímetro
//     float calcularArea()
//     {
//         return base * altura;
//     }
//     float calcularPerimetro()
//     {
//         return 2 * (base + altura);
//     }
// };

// int main()
// {
//     Rectangulo rect(5.0, 3.0);
//     cout << "Área del rectángulo: " << rect.calcularArea() << endl;
//     cout << "Perímetro del rectángulo: " << rect.calcularPerimetro() << endl;
//     return 0;
// }

// class Rectangulo {
// private:
//     float base;
//     float altura;
// public:
//     // Constructor
//     Rectangulo(float b, float a) {
//         base = b;
//         altura = a;
//     }
//     // Métodos para calcular área y perímetro
//     float calcularArea() {
//         return base * altura;
//     }
//     float calcularPerimetro() {
//         return 2 * (base + altura);
//     }
// };

// int main() {
//     Rectangulo rect(5.0, 3.0);
//     cout << "Área del rectángulo: " << rect.calcularArea() << endl;
//     cout << "Perímetro del rectángulo: " << rect.calcularPerimetro() << endl;
//     return 0;
// }

// class Rectangulo
// {
// private:
//     float base;
//     float altura;

// public:
//     // Constructor
//     Rectangulo(float b, float a)
//     {
//         setBase(b);
//         setAltura(a);
//     }
//     // Métodos para establecer y obtener base y altura
//     void setBase(float b)
//     {
//         base = (b > 0) ? b : 0;
//     }
//     float getBase()
//     {
//         return base;
//     }
//     void setAltura(float a)
//     {
//         altura = (a > 0) ? a : 0;
//     }
//     float getAltura()
//     {
//         return altura;
//     }
//     // Métodos para calcular área y perímetro
//     float calcularArea()
//     {
//         return base * altura;
//     }
//     float calcularPerimetro()
//     {
//         return 2 * (base + altura);
//     }
// };

// int main()
// {
//     Rectangulo rect(5.0, 3.0);
//     cout << "Área del rectángulo: " << rect.calcularArea() << endl;
//     return 0;
// }