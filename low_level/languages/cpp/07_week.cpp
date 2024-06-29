// ### Semana 7: Técnicas Avanzadas y Buenas Prácticas
// - **Día 43**: Patrón de diseño singleton.
// - **Día 44**: Otros patrones de diseño comunes (factory, observer).
// - **Día 45**: Uso avanzado de la STL.
// - **Día 46**: Metaprogramación con plantillas.
// - **Día 47**: Buenas prácticas de codificación en C++.
// - **Día 48**: Depuración y testing.

// Día 43: Patrón de diseño singleton.
// #include <iostream>

// class Singleton {
// public:
//     // Método estático para obtener la instancia única
//     static Singleton& getInstance() {
//         // La instancia se crea la primera vez que se llama a getInstance()
//         // y se garantiza que solo se cree una vez (constructo único).
//         static Singleton instancia;
//         return instancia;
//     }

//     // Métodos de la clase Singleton
//     void ejemploMetodo() {
//         std::cout << "Método de la instancia Singleton" << std::endl;
//     }

//     // Otros métodos y variables de la instancia Singleton

// private:
//     // Constructor privado para evitar que se pueda instanciar desde fuera
//     Singleton() {
//         // Constructor privado
//     }

//     // Destructor privado para evitar que se pueda eliminar la instancia
//     ~Singleton() {
//         // Destructor privado
//     }

//     // Evitar la copia del Singleton (opcional)
//     Singleton(const Singleton&) = delete;
//     Singleton& operator=(const Singleton&) = delete;
// };

// // Ejemplo de uso del Singleton
// int main() {
//     // Obtener la instancia única del Singleton
//     Singleton& instancia = Singleton::getInstance();

//     // Usar métodos y variables de la instancia Singleton
//     instancia.ejemploMetodo();

//     return 0;
// }

// Día 44: Otros patrones de diseño comunes (factory, observer).
// #include <iostream>
// #include <vector>
// #include <algorithm> // Para std::find

// // Interfaz para los observadores (Observer)
// class Observador {
// public:
//     virtual void actualizar(const std::string& mensaje) = 0;
//     virtual ~Observador() {}
// };

// // Sujeto observable (Subject)
// class Sujeto {
//     std::vector<Observador*> observadores;
// public:
//     void agregarObservador(Observador* obs) {
//         observadores.push_back(obs);
//     }

//     void eliminarObservador(Observador* obs) {
//         auto it = std::find(observadores.begin(), observadores.end(), obs);
//         if (it != observadores.end()) {
//             observadores.erase(it);
//         }
//     }

//     void notificarObservadores(const std::string& mensaje) {
//         for (Observador* obs : observadores) {
//             obs->actualizar(mensaje);
//         }
//     }
// };

// // Observadores concretos (Concrete Observers)
// class ObservadorConcreto1 : public Observador {
// public:
//     void actualizar(const std::string& mensaje) override {
//         std::cout << "Observador Concreto 1 recibió el mensaje: " << mensaje << std::endl;
//     }
// };

// class ObservadorConcreto2 : public Observador {
// public:
//     void actualizar(const std::string& mensaje) override {
//         std::cout << "Observador Concreto 2 recibió el mensaje: " << mensaje << std::endl;
//     }
// };

// // Ejemplo de uso del patrón Observer
// int main() {
//     Sujeto sujeto;

//     ObservadorConcreto1 obs1;
//     ObservadorConcreto2 obs2;

//     sujeto.agregarObservador(&obs1);
//     sujeto.agregarObservador(&obs2);

//     sujeto.notificarObservadores("¡Estado actualizado!");

//     sujeto.eliminarObservador(&obs1);

//     sujeto.notificarObservadores("¡Otro cambio de estado!");

//     return 0;
// }

// Día 45: Uso avanzado de la STL.
// #include <iostream>
// #include <map>
// #include <unordered_map>

// int main()
// {
//     // Ejemplo de map (árbol binario de búsqueda)
//     std::map<std::string, int> mapa;
//     mapa["a"] = 1;
//     mapa["b"] = 2;

//     std::cout << "Valor de b en mapa: " << mapa["b"] << std::endl;

//     // Ejemplo de unordered_map (tabla hash)
//     std::unordered_map<std::string, int> unordered_map;
//     unordered_map["a"] = 1;
//     unordered_map["b"] = 2;

//     std::cout << "Valor de b en unordered_map: " << unordered_map["b"] << std::endl;

//     return 0;
// }

// int main()
// {
//     std::vector<int> numeros = {5, 2, 7, 1, 8};

//     // Ordenar el vector
//     std::sort(numeros.begin(), numeros.end());

//     // Imprimir el vector ordenado
//     std::cout << "Vector ordenado: ";
//     for (int num : numeros)
//     {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Encontrar un elemento específico
//     int valor_buscar = 7;
//     auto it = std::find(numeros.begin(), numeros.end(), valor_buscar);
//     if (it != numeros.end())
//     {
//         std::cout << "Encontrado " << valor_buscar << " en la posición " << (it - numeros.begin()) << std::endl;
//     }
//     else
//     {
//         std::cout << "No se encontró " << valor_buscar << std::endl;
//     }

//     return 0;
// }

// int main()
// {
//     std::vector<int> numeros = {1, 2, 3, 4, 5};

//     // Usar una función lambda para imprimir cada elemento del vector
//     std::for_each(numeros.begin(), numeros.end(), [](int num)
//                   { std::cout << num << " "; });
//     std::cout << std::endl;

//     // Usar una función lambda para incrementar cada elemento del vector
//     std::for_each(numeros.begin(), numeros.end(), [](int &num)
//                   { num++; });

//     // Imprimir el vector actualizado
//     std::cout << "Vector incrementado: ";
//     for (int num : numeros)
//     {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// int main() {
//     // Ejemplo de std::string
//     std::string mensaje = "Hola, mundo!";
//     std::cout << "Longitud del mensaje: " << mensaje.size() << std::endl;

//     // Ejemplo de funciones matemáticas
//     double pi = std::acos(-1.0); // Obtener el valor de pi usando la función acos
//     std::cout << "Valor de pi: " << pi << std::endl;

//     return 0;
// }

// Día 46: Metaprogramación con plantillas.
// #include <iostream>

// // Ejemplo de plantilla simple
// template <typename T>
// T suma(T a, T b)
// {
//     return a + b;
// }

// int main()
// {
//     int resultado_int = suma(3, 5);
//     double resultado_double = suma(2.5, 3.7);

//     std::cout << "Suma de enteros: " << resultado_int << std::endl;
//     std::cout << "Suma de doubles: " << resultado_double << std::endl;

//     return 0;
// }
// // Metaprogramación para calcular factorial en tiempo de compilación
// template <int N>
// struct Factorial
// {
//     static const int value = N * Factorial<N - 1>::value;
// };

// template <>
// struct Factorial<0>
// {
//     static const int value = 1;
// };

// int main()
// {
//     const int result = Factorial<5>::value;
//     std::cout << "Factorial de 5: " << result << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <type_traits>

// // Metaprogramación para validar tipos en tiempo de compilación
// template <typename T>
// void imprimir_si_entero(T valor)
// {
//     if (std::is_integral<T>::value)
//     {
//         std::cout << "El valor " << valor << " es un entero." << std::endl;
//     }
//     else
//     {
//         std::cout << "El valor " << valor << " no es un entero." << std::endl;
//     }
// }

// int main()
// {
//     imprimir_si_entero(5);
//     imprimir_si_entero(3.14);
//     imprimir_si_entero("hola");
//     return 0;
// }
