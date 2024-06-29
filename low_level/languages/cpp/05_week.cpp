// ### Semana 5: Gestión de Memoria
// - **Día 29**: Gestión dinámica de memoria (new, delete).
// - **Día 30**: Punteros inteligentes (unique_ptr, shared_ptr, weak_ptr).
// - **Día 31**: Evitar fugas de memoria.
// - **Día 32**: Uso de RAII (Resource Acquisition Is Initialization).
// - **Día 33**: Gestión de recursos.
// - **Día 34**: Repaso y ejercicios prácticos.
// - **Día 35**: Ejercicio práctico integral.

// Día 29: Gestión dinámica de memoria (new, delete).
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Ingrese el tamaño del array: ";
//     cin >> n;

//     // Asignación dinámica de memoria para un array de enteros
//     int *array = new int[n];

//     // Inicialización del array con valores
//     for (int i = 0; i < n; ++i)
//     {
//         array[i] = i * 10;
//     }

//     // Imprimir los valores del array
//     cout << "Valores del array:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     // Liberación de memoria asignada dinámicamente
//     delete[] array;

//     return 0;
// }

// Día 30: Punteros inteligentes (unique_ptr, shared_ptr, weak_ptr).

// #include <iostream>
// #include <memory> // Para unique_ptr
// using namespace std;

// int main()
// {
//     // Crear un unique_ptr que posee un objeto int
//     unique_ptr<int> ptr(new int(42));

//     // Acceder al valor a través de unique_ptr
//     cout << "Valor a través de unique_ptr: " << *ptr << endl;

//     // Liberación automática de memoria al salir del ámbito
//     return 0;
// }

// int main()
// {
//     // Crear un shared_ptr que comparte un objeto int
//     shared_ptr<int> ptr1 = make_shared<int>(42);
//     shared_ptr<int> ptr2 = ptr1; // Comparten la propiedad del objeto

//     // Acceder al valor a través de shared_ptr
//     cout << "Valor a través de ptr1: " << *ptr1 << endl;
//     cout << "Valor a través de ptr2: " << *ptr2 << endl;

//     // Liberación automática de memoria cuando todos los shared_ptr se destruyen
//     return 0;
// }

// int main()
// {
//     shared_ptr<int> sharedPtr = make_shared<int>(42);
//     weak_ptr<int> weakPtr = sharedPtr; // Observa el objeto manejado por sharedPtr

//     // Acceder al valor a través de weak_ptr (necesita estar bloqueado)
//     if (shared_ptr<int> shared = weakPtr.lock())
//     {
//         cout << "Valor a través de weak_ptr: " << *shared << endl;
//     }
//     else
//     {
//         cout << "El objeto al que apunta weak_ptr ya no existe." << endl;
//     }

//     return 0;
// }

// Día 31: Evitar fugas de memoria.
// #include <memory> // Para std::shared_ptr, std::weak_ptr
// #include <iostream>
// using namespace std;

// class Nodo
// {
// public:
//     std::shared_ptr<Nodo> siguiente;
// };

// void evitarCiclosDeReferencia()
// {
//     std::shared_ptr<Nodo> nodo1 = std::make_shared<Nodo>();
//     std::shared_ptr<Nodo> nodo2 = std::make_shared<Nodo>();

//     nodo1->siguiente = nodo2;
//     nodo2->siguiente = nodo1; // Ciclo de referencia

//     // Utilizar std::weak_ptr para evitar el ciclo de referencia
//     std::weak_ptr<Nodo> weakNodo2 = nodo2;
//     nodo1->siguiente = weakNodo2;
// }

// int main()
// {
//     evitarCiclosDeReferencia();

//     // Los objetos compartidos se destruyen automáticamente al salir de la función
//     return 0;
// }

// Día 32: Uso de RAII (Resource Acquisition Is Initialization).
// #include <iostream>
// #include <memory> // Para std::unique_ptr
// using namespace std;

// // Clase que gestiona dinámicamente un recurso (en este caso, un entero)
// class Recurso {
// private:
//     std::unique_ptr<int> ptr;

// public:
//     Recurso() : ptr(new int(0)) {
//         cout << "Recurso adquirido. Valor inicial: " << *ptr << endl;
//     }

//     void operacion() {
//         *ptr += 1;
//         cout << "Operación realizada. Nuevo valor: " << *ptr << endl;
//     }

//     ~Recurso() {
//         cout << "Liberando recurso. Valor final: " << *ptr << endl;
//     }
// };

// int main() {
//     // Uso de RAII con la clase Recurso
//     Recurso recurso;
//     recurso.operacion();

//     // El recurso se libera automáticamente al salir del ámbito de main
//     return 0;
// }

// Día 33: Gestión de recursos.
// #include <iostream>
// #include <memory> // Para std::shared_ptr
// using namespace std;

// class RecursoCompartido {
// public:
//     RecursoCompartido() {
//         cout << "Recurso compartido adquirido." << endl;
//     }

//     ~RecursoCompartido() {
//         cout << "Recurso compartido liberado." << endl;
//     }

//     void operacion() {
//         cout << "Operación realizada en recurso compartido." << endl;
//     }
// };

// int main() {
//     // Uso de std::shared_ptr para gestionar un recurso compartido
//     std::shared_ptr<RecursoCompartido> ptr1 = std::make_shared<RecursoCompartido>();
//     std::shared_ptr<RecursoCompartido> ptr2 = ptr1; // Comparten la propiedad

//     ptr1->operacion();
//     ptr2->operacion();

//     // Los recursos compartidos se liberan automáticamente cuando los últimos shared_ptr se destruyen
//     return 0;
// }
