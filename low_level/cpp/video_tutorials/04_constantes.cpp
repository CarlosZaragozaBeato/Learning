#include <iostream>

using namespace std;
  

int main(){
  const string nombre = "Carlos";
  int edad = {24};

  double salario;

  cout << "Introduce el salario del empleado: ";
  cin >> salario;
  cout << "Datos del empleado(salario): "<< salario << endl;

  cout << "Introduzca su edad: ";
  cin >> edad;
  

  cout << "Nombre: " << nombre << " Edad: " << edad << " Salario: "<<salario << endl;
  return 0  ;
} 
