#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // int edades[] = {15, 27, 25, 28, 14, 15, 2, 3, 47, 8547, 4, 114, 4};

    // for (auto edad : edades)
    // {
    //     cout << "LA EDAD ES: " << edad << endl;
    // }

    // string email = "adasd@gmail.com";

    // for (auto e : email)
    // {
    //     if (e == '@')
    //     {
    //         cout << "EL EMAIL TIENE ARROBA";
    //     }
    // }

    vector<int> numeros;

    cout << "INTRODUCE VARIOS NUMEROS \n";
    int num;
    while (cin >> num && num != 0)
    {
        numeros.push_back(num);
    }

    cout << "has introducido los siguientes numeros: \n";

    for (int n : numeros)
    {
        cout << n << endl;

    }

    return 0;
}