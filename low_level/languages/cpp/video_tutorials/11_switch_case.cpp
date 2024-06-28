#include <iostream>
using namespace std;

int main()
{

    // int opcion;
    // string mensaje;
    // int a, b;

    // cout << "Menu de opciones\n1.mostrar mensaje\n2.suma\n3.salir\n";

    // cin >> opcion;

    // switch (opcion)
    // {
    // case 1:
    //     cout << "INTRODUZCA UN MENSAJE: ";
    //     cin >> mensaje;
    //     cout << "El mensaje es " << mensaje;
    //     break;

    // case 2:

    //     cout << "INTRODUCE DOS NUMEROS: ";
    //     cin >> a;
    //     cin >> b;

    //     cout << "LA SUMA ES : " << a + b;
    //     break;
    // case 3:
    //     break;
    //     break;
    // default:
    //     cout << "INTRODUZCA UNA OPCION VALIDA";
    //     break;
    // }

    char idioma, categoria;

    cout << "SELECIONA EL IDIOMA: ";
    cin >> idioma;

    switch (idioma)
    {
    case 'E':
    case 'e':
        cout << "\nSELECCIONE LA CATEGORIA (L, R, T)";
        cin >> categoria;

        switch (categoria)
        {
        case 'L':
        case 'l':
            cout << "HAS SELECCIONADO LA CATEGORIA LIBROS";
            break;

        case 'r':
        case 'R':
            cout << "HAS SELECCIONADO LA CATEGORIA ROPA";
            break;

        case 't':
        case 'T':
            cout << "HAS SELECCIONADO LA CATEGORIA TECNOLOGIA";
            break;
        default:
            cout << "CATEGORIA INVALIDA";
        }

        break;

    case 'I':
    case 'i':
        cout << "\nSELECT A CATEGORY (B, C, T)";
        cin >> categoria;

        switch (categoria)
        {
        case 'b':
        case 'B':
            cout << "YOU SELECTED BOOKS CATEGORY";
            break;

        case 'c':
        case 'C':
            cout << "YOU SELECTED CLOTHES CATEGORY";
            break;

        case 't':
        case 'T':
            cout << "YOU SELECTED THE TECNHOLOGY CATEGORY";
            break;

        default:

            cout << "INVALID CATEGORY";
        }

        break;

    default:
        cout << "IDIOMA NO VALIDO";

        break;
    }

    return 0;
}