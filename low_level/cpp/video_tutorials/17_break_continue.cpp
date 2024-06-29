#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> nombres = {"CALO", "CALO_1", "CALO_2", "CALO_3"};
    string persona_buscada = "CALO";

    for (int i = 0; i < nombres.size(); i++)
    {
        if (persona_buscada == nombres[i])
        {
            cout << "PERSONA ENCONTRADA" << persona_buscada[i] << "EN EL INDICE " << i;
            break;
        }
    }

    return 0;
}