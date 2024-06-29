// ### Semana 4: Estructuras de Datos Avanzadas
// - **Día 22**: Vectores y listas.
// - **Día 23**: Pilas y colas.
// - **Día 24**: Mapas y conjuntos.
// - **Día 25**: Iteradores.
// - **Día 26**: Algoritmos de la STL (Standard Template Library).
// - **Día 27**: Funciones lambda.
// - **Día 28**: Repaso y ejercicios prácticos.

// DÍA 22: Vectores y listas.
// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// // Funciones para vector
// void agregarTarea(vector<string>& tareas, const string& tarea) {
//     tareas.push_back(tarea);
// }

// void eliminarTarea(vector<string>& tareas, const string& tarea) {
//     auto it = find(tareas.begin(), tareas.end(), tarea);
//     if (it != tareas.end()) {
//         tareas.erase(it);
//     } else {
//         cout << "Tarea no encontrada: " << tarea << endl;
//     }
// }

// void mostrarTareas(const vector<string>& tareas) {
//     cout << "Lista de Tareas (Vector):" << endl;
//     for (const auto& tarea : tareas) {
//         cout << "- " << tarea << endl;
//     }
// }

// // Funciones para list
// void agregarTarea(list<string>& tareas, const string& tarea) {
//     tareas.push_back(tarea);
// }

// void eliminarTarea(list<string>& tareas, const string& tarea) {
//     auto it = find(tareas.begin(), tareas.end(), tarea);
//     if (it != tareas.end()) {
//         tareas.erase(it);
//     } else {
//         cout << "Tarea no encontrada: " << tarea << endl;
//     }
// }

// void mostrarTareas(const list<string>& tareas) {
//     cout << "Lista de Tareas (List):" << endl;
//     for (const auto& tarea : tareas) {
//         cout << "- " << tarea << endl;
//     }
// }

// int main() {
//     vector<string> tareasVector;
//     list<string> tareasList;

//     // Añadir tareas
//     agregarTarea(tareasVector, "Estudiar C++");
//     agregarTarea(tareasVector, "Hacer ejercicio");
//     agregarTarea(tareasList, "Estudiar C++");
//     agregarTarea(tareasList, "Hacer ejercicio");

//     // Mostrar tareas
//     mostrarTareas(tareasVector);
//     mostrarTareas(tareasList);

//     // Eliminar una tarea
//     eliminarTarea(tareasVector, "Hacer ejercicio");
//     eliminarTarea(tareasList, "Hacer ejercicio");

//     // Mostrar tareas después de eliminar
//     mostrarTareas(tareasVector);
//     mostrarTareas(tareasList);

//     return 0;
// }

// DÍA 23: Pilas y colas.
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// int main() {
//     queue<string> colaClientes;
//     stack<string> pilaTareas;

//     // Simulación de clientes llegando a la cola del banco
//     colaClientes.push("Cliente 1");
//     colaClientes.push("Cliente 2");
//     colaClientes.push("Cliente 3");

//     // Simulación de tareas en la pila
//     pilaTareas.push("Tarea A");
//     pilaTareas.push("Tarea B");
//     pilaTareas.push("Tarea C");

//     // Atendiendo clientes
//     cout << "Atendiendo clientes del banco:" << endl;
//     while (!colaClientes.empty()) {
//         cout << "Atendiendo a: " << colaClientes.front() << endl;
//         colaClientes.pop();
//     }

//     // Ejecutando tareas
//     cout << "\nEjecutando tareas:" << endl;
//     while (!pilaTareas.empty()) {
//         cout << "Ejecutando: " << pilaTareas.top() << endl;
//         pilaTareas.pop();
//     }

//     return 0;
// }

// DÍA 24: Mapas y conjuntos.
// #include <iostream>
// #include <map>
// #include <set>
// using namespace std;

// int main() {
//     map<string, int> inventario;
//     set<string> productosVendidos;

//     // Añadir productos al inventario
//     inventario["Manzanas"] = 50;
//     inventario["Naranjas"] = 30;
//     inventario["Peras"] = 20;

//     // Vender productos
//     string productoVendido = "Manzanas";
//     int cantidadVendida = 10;
//     if (inventario[productoVendido] >= cantidadVendida) {
//         inventario[productoVendido] -= cantidadVendida;
//         productosVendidos.insert(productoVendido);
//     } else {
//         cout << "No hay suficientes " << productoVendido << " en el inventario." << endl;
//     }

//     // Mostrar inventario
//     cout << "Inventario:" << endl;
//     for (const auto& par : inventario) {
//         cout << par.first << ": " << par.second << endl;
//     }

//     // Mostrar productos vendidos
//     cout << "Productos vendidos:" << endl;
//     for (const auto& producto : productosVendidos) {
//         cout << producto << endl;
//     }

//     return 0;
// }

// DÍA 25: Iteradores.
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> numeros = {1, 2, 3, 4, 5};

//     // Declaración de un iterador
//     vector<int>::iterator it;

//     // Duplicar los valores usando el iterador
//     for (it = numeros.begin(); it != numeros.end(); ++it) {
//         *it *= 2;
//     }

//     // Mostrar los elementos del vector modificados
//     cout << "Elementos del vector después de duplicar:" << endl;
//     for (it = numeros.begin(); it != numeros.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     return 0;
// }

// DÍA 26: Algoritmos de la STL (Standard Template Library).
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numeros = {5, 1, 4, 2, 3, 2, 3, 5};

//     // Ordenar el vector
//     sort(numeros.begin(), numeros.end());
//     cout << "Vector ordenado: ";
//     for (int num : numeros) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Contar cuántas veces aparece el número 3
//     int count_3 = count(numeros.begin(), numeros.end(), 3);
//     cout << "El número 3 aparece " << count_3 << " veces en el vector" << endl;

//     // Encontrar el primer número mayor que 3
//     auto it = find_if(numeros.begin(), numeros.end(), [](int x) { return x > 3; });
//     if (it != numeros.end()) {
//         cout << "El primer número mayor que 3 es: " << *it << endl;
//     } else {
//         cout << "No se encontró ningún número mayor que 3" << endl;
//     }

//     // Duplicar los valores del vector
//     transform(numeros.begin(), numeros.end(), numeros.begin(), [](int x) { return x * 2; });
//     cout << "Vector después de duplicar los valores: ";
//     for (int num : numeros) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// DÍA 27: Funciones lambda.
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> numeros = {1, 2, 3, 4, 5};

//     // Función lambda que imprime cada elemento del vector
//     cout << "Elementos del vector: ";
//     for_each(numeros.begin(), numeros.end(), [](int num) {
//         cout << num << " ";
//     });
//     cout << endl;

//     return 0;
// }
