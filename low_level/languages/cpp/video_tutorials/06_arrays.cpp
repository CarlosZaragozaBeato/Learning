 #include <iostream>

 using namespace std;

 int main(){

    const int personas{10};

    int edades[personas] = {10,20,30,50,60};

    edades[6] = 125;

    cout << edades[4] << "\n";

    cout << edades[1] << "\n";

    cout << edades[5] << "\n";

    cout << edades[6] << "\n";

    cin >> edades[6] ; 
    cout << edades[6]<< "\n";


    return 0;
 }