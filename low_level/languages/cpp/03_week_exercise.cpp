// #include <iostream>
// #include <vector>
// using namespace std;

// class Medio {
// protected:
//     string titulo;
//     string autor;
// public:
//     Medio(string t, string a) : titulo(t), autor(a) {}
//     virtual void mostrarInformacion() const {
//         cout << "Título: " << titulo << ", Autor: " << autor << endl;
//     }
//     virtual ~Medio() = default;
// };

// class Libro : public Medio {
// private:
//     int numPaginas;
// public:
//     Libro(string t, string a, int n) : Medio(t, a), numPaginas(n) {}
//     void mostrarInformacion() const override {
//         cout << "Libro - Título: " << titulo << ", Autor: " << autor << ", Páginas: " << numPaginas << endl;
//     }
// };

// class DVD : public Medio {
// private:
//     double duracion; // en horas
// public:
//     DVD(string t, string a, double d) : Medio(t, a), duracion(d) {}
//     void mostrarInformacion() const override {
//         cout << "DVD - Título: " << titulo << ", Autor: " << autor << ", Duración: " << duracion << " horas" << endl;
//     }
// };

// class CD : public Medio {
// private:
//     int numCanciones;
// public:
//     CD(string t, string a, int n) : Medio(t, a), numCanciones(n) {}
//     void mostrarInformacion() const override {
//         cout << "CD - Título: " << titulo << ", Autor: " << autor << ", Canciones: " << numCanciones << endl;
//     }
// };

// int main() {
//     vector<Medio*> biblioteca;

//     biblioteca.push_back(new Libro("1984", "George Orwell", 328));
//     biblioteca.push_back(new DVD("Interstellar", "Christopher Nolan", 2.5));
//     biblioteca.push_back(new CD("Thriller", "Michael Jackson", 9));

//     for (const auto& medio : biblioteca) {
//         medio->mostrarInformacion();
//     }

//     for (const auto& medio : biblioteca) {
//         delete medio;
//     }

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// class Figura {
// public:
//     virtual double area() const = 0;
//     virtual double perimetro() const = 0;
//     virtual ~Figura() = default;
// };

// class Circulo : public Figura {
// private:
//     double radio;
// public:
//     Circulo(double r) : radio(r) {}
//     double area() const override {
//         return M_PI * radio * radio;
//     }
//     double perimetro() const override {
//         return 2 * M_PI * radio;
//     }
// };

// class Rectangulo : public Figura {
// private:
//     double ancho, alto;
// public:
//     Rectangulo(double a, double b) : ancho(a), alto(b) {}
//     double area() const override {
//         return ancho * alto;
//     }
//     double perimetro() const override {
//         return 2 * (ancho + alto);
//     }
// };

// class Triangulo : public Figura {
// private:
//     double base, altura;
// public:
//     Triangulo(double b, double h) : base(b), altura(h) {}
//     double area() const override {
//         return (base * altura) / 2;
//     }
//     double perimetro() const override {
//         // Asumimos un triángulo equilátero para simplificar
//         return 3 * base;
//     }
// };

// int main() {
//     Circulo c(5);
//     Rectangulo r(4, 6);
//     Triangulo t(3, 4);

//     cout << "Círculo - Área: " << c.area() << ", Perímetro: " << c.perimetro() << endl;
//     cout << "Rectángulo - Área: " << r.area() << ", Perímetro: " << r.perimetro() << endl;
//     cout << "Triángulo - Área: " << t.area() << ", Perímetro: " << t.perimetro() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Vehiculo {
// public:
//     virtual void acelerar() const = 0;
//     virtual ~Vehiculo() = default;
// };

// class Coche : public Vehiculo {
// public:
//     void acelerar() const override {
//         cout << "El coche está acelerando" << endl;
//     }
// };

// class Bicicleta : public Vehiculo {
// public:
//     void acelerar() const override {
//         cout << "La bicicleta está acelerando" << endl;
//     }
// };

// class Avion : public Vehiculo {
// public:
//     void acelerar() const override {
//         cout << "El avión está despegando" << endl;
//     }
// };

// void pruebaAceleracion(const Vehiculo& v) {
//     v.acelerar();
// }

// int main() {
//     Coche c;
//     Bicicleta b;
//     Avion a;

//     pruebaAceleracion(c);
//     pruebaAceleracion(b);
//     pruebaAceleracion(a);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complejo {
// private:
//     double real;
//     double imaginario;
// public:
//     Complejo(double r = 0, double i = 0) : real(r), imaginario(i) {}

//     Complejo operator+(const Complejo& c) const {
//         return Complejo(real + c.real, imaginario + c.imaginario);
//     }

//     Complejo operator*(const Complejo& c) const {
//         return Complejo(real * c.real - imaginario * c.imaginario, real * c.imaginario + imaginario * c.real);
//     }

//     friend ostream& operator<<(ostream& os, const Complejo& c) {
//         os << c.real << " + " << c.imaginario << "i";
//         return os;
//     }
// };

// int main() {
//     Complejo c1(2, 3);
//     Complejo c2(1, 4);

//     Complejo suma = c1 + c2;
//     Complejo producto = c1 * c2;

//     cout << "Suma: " << suma << endl;
//     cout << "Producto: " << producto << endl;

//     return 0;
// }

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

// int main() {
//     Par<int, string> par1(1, "uno");
//     cout << "Primero: " << par1.getPrimero() << ", Segundo: " << par1.getSegundo() << endl;

//     par1.setPrimero(2);
//     par1.setSegundo("dos");
//     cout << "Primero: " << par1.getPrimero() << ", Segundo: " << par1.getSegundo() << endl;

//     return 0;
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// double dividir(double numerador, double denominador) {
//     if (denominador == 0) {
//         throw runtime_error("Error: División por cero");
//     }
//     return numerador / denominador;
// }

// int main() {
//     double num, den;

//     cout << "Ingrese el numerador: ";
//     cin >> num;
//     cout << "Ingrese el denominador: ";
//     cin >> den;

//     try {
//         double resultado = dividir(num, den);
//         cout << "Resultado: " << resultado << endl;
//     } catch (runtime_error &e) {
//         cout << "Excepción capturada: " << e.what() << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <stdexcept>
// using namespace std;

// template <typename T>
// class Inventario {
// private:
//     vector<T> items;
// public:
//     void agregar(const T& item) {
//         items.push_back(item);
//     }

//     void remover(const T& item) {
//         for (auto it = items.begin(); it != items.end(); ++it) {
//             if (*it == item) {
//                 items.erase(it);
//                 return;
//             }
//         }
//         throw runtime_error("Producto no encontrado en el inventario");
//     }

//     void mostrarInventario() const {
//         for (const auto& item : items) {
//             item.mostrarInformacion();
//         }
//     }
// };

// class Producto {
// protected:
//     string nombre;
//     int cantidad;
//     double precio;
// public:
//     Producto(string n, int c, double p) : nombre(n), cantidad(c), precio(p) {}
//     virtual void mostrarInformacion() const {
//         cout << "Producto - Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: " << precio << endl;
//     }
//     bool operator==(const Producto& otro) const {
//         return nombre == otro.nombre;
//     }
//     virtual ~Producto() = default;
// };

// class Electrodomestico : public Producto {
// private:
//     int garantia; // en meses
// public:
//     Electrodomestico(string n, int c, double p, int g) : Producto(n, c, p), garantia(g) {}
//     void mostrarInformacion() const override {
//         cout << "Electrodoméstico - Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: " << precio << ", Garantía: " << garantia << " meses" << endl;
//     }
// };

// class Alimento : public Producto {
// private:
//     string fechaCaducidad;
// public:
//     Alimento(string n, int c, double p, string fc) : Producto(n, c, p), fechaCaducidad(fc) {}
//     void mostrarInformacion() const override {
//         cout << "Alimento - Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: " << precio << ", Fecha de Caducidad: " << fechaCaducidad << endl;
//     }
// };

// class Ropa : public Producto {
// private:
//     string talla;
// public:
//     Ropa(string n, int c, double p, string t) : Producto(n, c, p), talla(t) {}
//     void mostrarInformacion() const override {
//         cout << "Ropa - Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: " << precio << ", Talla: " << talla << endl;
//     }
// };

// int main() {
//     Inventario<Producto*> inventario;

//     Producto* p1 = new Electrodomestico("Televisor", 10, 300.0, 24);
//     Producto* p2 = new Alimento("Manzanas", 50, 1.5, "01/07/2024");
//     Producto* p3 = new Ropa("Camisa", 20, 25.0, "M");

//     inventario.agregar(p1);
//     inventario.agregar(p2);
//     inventario.agregar(p3);

//     cout << "Inventario inicial:" << endl;
//     inventario.mostrarInventario();

//     try {
//         inventario.remover(p2);
//     } catch (runtime_error &e) {
//         cout << "Error: " << e.what() << endl;
//     }

//     cout << "Inventario después de remover las manzanas:" << endl;
//     inventario.mostrarInventario();

//     for (auto& item : inventario) {
//         delete item;
//     }

//     return 0;
// }










