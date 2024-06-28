#include <iostream>
using namespace std;

int main()
{

    int opcion;
    string mensaje;
    int a, b;

    cout << "Menu de opciones\n1.mostrar mensaje\n2.suma\n3.salir\n";

    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "INTRODUZCA UN MENSAJE: ";
        cin >> mensaje;
        cout << "El mensaje es " << mensaje;
        break;

    case 2:

        cout << "INTRODUCE DOS NUMEROS: ";
        cin >> a;
        cin >> b;

        cout << "LA SUMA ES : " << a + b;
        break;
    case 3:
        break;
        break;
    default:
        cout << "INTRODUZCA UNA OPCION VALIDA";
        break;
    }

    return 0;
}