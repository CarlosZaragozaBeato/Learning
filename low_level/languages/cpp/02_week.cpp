#include <iostream>
#include <string>

using namespace std;

class Persona
{

private:
    string nombre;
    int edad;

public:
    void setNombre(string n)
    {
        nombre = n;
    }

    string getNombre()
    {
        return nombre;
    }

    void setEdad(int e)
    {
        if (e >= 0 && e <= 150)
        {
            edad = e;
        }
        else
        {
            cout << "Edad inválida." << endl;
        }
    }

    int getEdad()
    {
        return edad;
    }

    Persona()
    {
        cout << "Constructor por defecto llamado" << endl;
        nombre = "";
        edad = 0;
    }

    // Constructor con parámetros
    Persona(string n, int e)
    {
        cout << "Constructor con parámetros llamado" << endl;
        nombre = n;
        edad = e;
    }

    // Destructor
    ~Persona()
    {
        cout << "Destructor llamado para " << nombre << endl;
        // Aquí podrían ir operaciones de liberación de recursos, si es necesario
    }

    // Método para saludar
    void saludar()
    {
        cout << "Hola, soy " << nombre << "!" << endl;
    }
};

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Definición de la estructura Persona
struct StructPersona
{
    string nombre;
    int edad;
    double altura;
};

// Función que imprime los datos de una Persona
void imprimirPersona(const StructPersona &p)
{
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Altura: " << p.altura << " metros" << endl;
}

// Función que crea y retorna una Persona
StructPersona crearPersona(string nombre, int edad, double altura)
{
    StructPersona nueva_persona = {nombre, edad, altura};
    return nueva_persona;
}

int main()
{
    // ### Semana 2: Estructuras de Datos Básicas
    // - **Día 8**: Arrays y strings.
    // - **Día 9**: Punteros y referencias.
    // - **Día 10**: Estructuras (struct).
    // - **Día 11**: Introducción a clases y objetos.
    // - **Día 12**: Constructores y destructores.
    // - **Día 13**: Encapsulamiento y métodos.
    // - **Día 14**: Repaso y ejercicios prácticos.

    // DIA 8 Arrays y strings.
    string frase = "Hola, mundo!";

    // Obtener la longitud de la frase
    cout << "Longitud de la frase: " << frase.length() << endl;

    // Concatenar un string al final de otro
    frase.append(" Qué tal?");
    cout << "Frase concatenada: " << frase << endl;

    // Obtener un substring
    string sub = frase.substr(5, 5); // desde el índice 5, longitud 5
    cout << "Substring: " << sub << endl;

    // Buscar una subcadena
    size_t posicion = frase.find("mundo");
    if (posicion != string::npos)
    {
        cout << "Encontrado 'mundo' en la posición: " << posicion << endl;
    }
    else
    {
        cout << "'mundo' no encontrado." << endl;
    }

    // Reemplazar una parte de la frase
    frase.replace(posicion, 5, "Universo");
    cout << "Frase modificada: " << frase << endl;
    int numeros[] = {10, 20, 30, 40, 50};
    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        suma += numeros[i];
    }

    cout << "La suma de los elementos del array es: " << suma << endl;

    // DÍA 9 Punteros y referencias.
    // Punteros
    int x = 10;
    int *ptr = &x; // ptr apunta a la dirección de memoria de x

    // Acceso y modificación del valor a través de ptr
    cout << "Valor de x: " << *ptr << endl;

    *ptr = 20; // Modifica el valor de x a través de ptr

    cout << "Nuevo valor de x: " << x << endl;

    // Referencias

    int x = 10, y = 20;
    cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "Después del intercambio: x = " << x << ", y = " << y << endl;

    // DIA 10 Estructuras (struct)
    StructPersona persona1 = crearPersona("Ana", 28, 1.70);
    imprimirPersona(persona1);

    // DIA 11 Introducción a clases y objetos, Constructores y destructores, Encapsulamiento y métodos.
    // Creación de objetos de la clase Persona
    Persona CLASS_persona1;
    Persona CLASS_persona2;

    // Asignación de valores a los atributos de los objetos
    CLASS_persona1.setNombre("María");
    CLASS_persona1.setEdad(25);

    CLASS_persona2.setNombre("Carlos");
    CLASS_persona2.setEdad(28);

    // Llamada a métodos de los objetos
    CLASS_persona1.saludar(); // Salida: Hola, soy María!
    CLASS_persona2.saludar(); // Salida: Hola, soy Carlos!
    return 0;
}