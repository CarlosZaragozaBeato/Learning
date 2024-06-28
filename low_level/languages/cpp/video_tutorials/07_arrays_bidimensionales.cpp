#include <iostream>

using namespace std;

int main()
{

    int mi_matrix[4][5];

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            mi_matrix[i][j] = j + 10;
        }
    }

    cout << mi_matrix[2][3];
    return 0;
}