// #include <iostream>
// #include <memory>   // Para std::shared_ptr
// #include <vector>
// #include <string>
// using namespace std;

// // Clase Estudiante
// class Estudiante {
// private:
//     string nombre;
//     int edad;
//     double promedio;

// public:
//     Estudiante(const string& n, int e, double p) : nombre(n), edad(e), promedio(p) {}

//     // Métodos para acceder a los atributos
//     string getNombre() const { return nombre; }
//     int getEdad() const { return edad; }
//     double getPromedio() const { return promedio; }
// };

// // Clase ListaEstudiantes
// class ListaEstudiantes {
// private:
//     vector<std::shared_ptr<Estudiante>> estudiantes;

// public:
//     // Método para agregar un estudiante a la lista
//     void agregarEstudiante(const string& nombre, int edad, double promedio) {
//         estudiantes.push_back(std::make_shared<Estudiante>(nombre, edad, promedio));
//     }

//     // Método para mostrar todos los estudiantes
//     void mostrarEstudiantes() const {
//         cout << "Lista de Estudiantes:" << endl;
//         for (const auto& estudiante : estudiantes) {
//             cout << "Nombre: " << estudiante->getNombre() << ", Edad: " << estudiante->getEdad()
//                  << ", Promedio: " << estudiante->getPromedio() << endl;
//         }
//     }

//     // Destructor para liberar automáticamente la memoria de los estudiantes
//     ~ListaEstudiantes() {
//         cout << "Liberando memoria de los estudiantes..." << endl;
//         // La memoria de los estudiantes se libera automáticamente al salir del ámbito
//     }
// };

// int main() {
//     ListaEstudiantes lista;

//     // Agregar algunos estudiantes a la lista
//     lista.agregarEstudiante("Juan", 20, 85.5);
//     lista.agregarEstudiante("María", 21, 90.0);
//     lista.agregarEstudiante("Carlos", 19, 78.3);

//     // Mostrar la lista de estudiantes
//     lista.mostrarEstudiantes();

//     // La memoria se libera automáticamente al salir de main debido al RAII

//     return 0;
// }
