// Vectores y Listas
//  #include <iostream>
//  #include <vector>
//  using namespace std;

// int main() {
//     vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {4, 5, 6};

//     vector<int> resultado;

//     // Concatenar vec1 y vec2 en resultado
//     for (int num : vec1) {
//         resultado.push_back(num);
//     }
//     for (int num : vec2) {
//         resultado.push_back(num);
//     }

//     // Mostrar el vector resultado y su tamaño
//     cout << "Vector resultado: ";
//     for (int num : resultado) {
//         cout << num << " ";
//     }
//     cout << endl;
//     cout << "Tamaño del vector resultado: " << resultado.size() << endl;

//     return 0;
// }

// Pilas y Colas
// #include <iostream>
// #include <vector>
// using namespace std;

// template <typename T>
// class Pila
// {
// private:
//     vector<T> elementos;

// public:
//     void push(const T &elemento)
//     {
//         elementos.push_back(elemento);
//     }

//     void pop()
//     {
//         if (!elementos.empty())
//         {
//             elementos.pop_back();
//         }
//     }

//     T top() const
//     {
//         if (!elementos.empty())
//         {
//             return elementos.back();
//         }
//         throw runtime_error("Pila vacía");
//     }

//     bool empty() const
//     {
//         return elementos.empty();
//     }
// };

// int main()
// {
//     Pila<int> pila;

//     pila.push(1);
//     pila.push(2);
//     pila.push(3);

//     while (!pila.empty())
//     {
//         cout << "Elemento top: " << pila.top() << endl;
//         pila.pop();
//     }

//     return 0;
// }

// Mapas y Conjuntos
// #include <iostream>
// #include <map>
// #include <sstream>
// using namespace std;

// int main() {
//     string texto = "Hola mundo Hola todos mundo mundo";

//     // Mapa para contar frecuencia de palabras
//     map<string, int> frecuencia;

//     // Utilizar stringstream para dividir el texto en palabras
//     stringstream ss(texto);
//     string palabra;

//     while (ss >> palabra) {
//         frecuencia[palabra]++;
//     }

//     // Mostrar frecuencia de palabras
//     for (const auto& par : frecuencia) {
//         cout << par.first << ": " << par.second << endl;
//     }

//     return 0;
// }

// Iteradores
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> numeros = {1, 2, 3, 4, 5};

//     // Usar iteradores para imprimir elementos del vector
//     cout << "Elementos del vector: ";
//     for (auto it = numeros.begin(); it != numeros.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Algoritmos de la STL
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numeros = {5, 2, 7, 1, 8, 4, 9, 3};

//     // Ordenar el vector en orden ascendente
//     sort(numeros.begin(), numeros.end());

//     // Contar números pares en el vector
//     int num_pares = count_if(numeros.begin(), numeros.end(), [](int num) {
//         return num % 2 == 0;
//     });

//     // Mostrar vector ordenado y cantidad de números pares
//     cout << "Vector ordenado: ";
//     for (int num : numeros) {
//         cout << num << " ";
//     }
//     cout << endl;
//     cout << "Cantidad de números pares: " << num_pares << endl;

//     return 0;
// }

// Funciones Lambda 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numeros = {1, 2, 3, 4, 5};

//     // Función lambda para sumar elementos del vector
//     auto suma = accumulate(numeros.begin(), numeros.end(), 0, [](int acumulador, int num) {
//         return acumulador + num;
//     });

//     // Mostrar resultado de la suma
//     cout << "Suma de elementos del vector: " << suma << endl;

//     return 0;
// }
