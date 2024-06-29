#include <iostream>

using namespace std;


void toLowerCase(string &cadena){
  for(int i=0; i<cadena.length();i++){
    cadena[i]=tolower(cadena[i]);
  }
}


int main(){

  int edad;
  string examen_medico;


  cout << "Por favor introduce tu edad: ";
  cin >> edad;


  cout << "Has pasado el examen medico ? (Si/No): ";
  cin >> examen_medico;

  toLowerCase(examen_medico);
  if (edad >= 18 && examen_medico == "si"){//(examen_medico == "Si" || examen_medico == "si")){
    cout << "Tienes el carnet de conducir";
  }else{
    cout << "No cumples los requisitos";
  }





  return 0;
}
