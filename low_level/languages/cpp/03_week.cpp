// ### Semana 3: Programación Orientada a Objetos (OOP)
// - **Día 15**: Principios de OOP.
// - **Día 16**: Herencia.
// - **Día 17**: Polimorfismo.
// - **Día 18**: Sobrecarga de operadores.
// - **Día 19**: Plantillas (templates).
// - **Día 20**: Excepciones.
// - **Día 21**: Repaso y ejercicios prácticos.

// Día 15: Principios de OOP.
// Día 16: Herencia.
// Día 17: Polimorfismo.
// Día 18: Sobrecarga de operadores.
// #include <iostream>
// using namespace std;

// class Animal {
// private:
//     string nombre;
//     int edad;

// public:
//     Animal(string n, int e) : nombre(n), edad(e) {}
//     void setNombre(string n) {
//         nombre = n;
//     }
//     string getNombre() {
//         return nombre;
//     }
//     void setEdad(int e) {
//         edad = e;
//     }
//     int getEdad() {
//         return edad;
//     }
//     virtual void comer() {
//         cout << nombre << " está comiendo" << endl;
//     }
// };

// class Perro : public Animal {
// public:
//     Perro(string n, int e) : Animal(n, e) {}
//     void ladrar() {
//         cout << getNombre() << " está ladrando" << endl;
//     }
//     void comer() override {
//         cout << getNombre() << " (Perro) está comiendo" << endl;
//     }
// };

// class Gato : public Animal {
// public:
//     Gato(string n, int e) : Animal(n, e) {}
//     void maullar() {
//         cout << getNombre() << " está maullando" << endl;
//     }
//     void comer() override {
//         cout << getNombre() << " (Gato) está comiendo" << endl;
//     }
// };

// void alimentarAnimal(Animal* a) {
//     a->comer();
// }

// int main() {
//     Perro p("Fido", 5);
//     Gato g("Whiskers", 3);
//     alimentarAnimal(&p);
//     alimentarAnimal(&g);
//     p.ladrar();
//     g.maullar();
//     return 0;
// }

// Día 19: Plantillas (templates).
// #include <iostream>
// using namespace std;

// template <typename T1, typename T2>
// class Par {
// private:
//     T1 primero;
//     T2 segundo;
// public:
//     Par(T1 a, T2 b) : primero(a), segundo(b) {}
//     T1 getPrimero() const {
//         return primero;
//     }
//     T2 getSegundo() const {
//         return segundo;
//     }
//     void setPrimero(T1 a) {
//         primero = a;
//     }
//     void setSegundo(T2 b) {
//         segundo = b;
//     }
// };

// template <typename T1, typename T2>
// void imprimirPar(const Par<T1, T2>& p) {
//     cout << "Primero: " << p.getPrimero() << ", Segundo: " << p.getSegundo() << endl;
// }

// int main() {
//     Par<int, string> par1(1, "uno");
//     imprimirPar(par1);
//     Par<double, char> par2(3.14, 'A');
//     imprimirPar(par2);
//     return 0;
// }

// Día 20: Excepciones.
// #include <iostream>
// #include <exception>
// using namespace std;
// class MiExcepcion : public exception {
// public:
//     const char* what() const noexcept override {
//         return "MiExcepcion ocurrió";
//     }
// };
// void funcion() {
//     throw MiExcepcion();
// }
// int main() {
//     try {
//         funcion();
//     } catch (MiExcepcion &e) {
//         cout << "Excepción capturada: " << e.what() << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int dividir(int numerador, int denominador) {
//     if (denominador == 0) {
//         throw runtime_error("Error: División por cero");
//     }
//     return numerador / denominador;
// }

// int main() {
//     int num, den;
//     try {
//         cout << "Ingrese el numerador: ";
//         if (!(cin >> num)) {
//             throw invalid_argument("Entrada no válida para el numerador");
//         }
//         cout << "Ingrese el denominador: ";
//         if (!(cin >> den)) {
//             throw invalid_argument("Entrada no válida para el denominador");
//         }
//         int resultado = dividir(num, den);
//         cout << "Resultado: " << resultado << endl;
//     } catch (invalid_argument &e) {
//         cout << "Excepción capturada: " << e.what() << endl;
//     } catch (runtime_error &e) {
//         cout << "Excepción capturada: " << e.what() << endl;
//     } catch (...) {
//         cout << "Excepción desconocida capturada" << endl;
//     }
//     return 0;
// }
