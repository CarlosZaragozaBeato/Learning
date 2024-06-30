#include <iostream>

using namespace std;

int main (){
  //
  // int = 5; 
  // int b = 10;
  //
  // a+=b;
  // a*=b;
  // cout << "El valor de a es: "<<a""<<endl;
  //
  // int z=++a;
  // cout << "El valor de z es: "<<z;
  // cout << "El valor de a es:" <<a<<endl;
  //
  // int w = b++;
  // cout << "El valor de w es:" << w << endl;
  // cout << "El valor de b es: "<<b<<endl;
 
  // int num;
  // bool primo = true;
  // cout <<"Introduce un numero positivo";
  // cin >> num;
  //
  // for (int i= 2;i<=num/2;i++){
  //     if (num % i == 0){
  //       primo=false;
  //
  //       break;
  //   } 
  // }
  //  if (primo){
  //    cout << "El numero es primo: "<<num;
  //  }else{
  //    cout << "El numero no es primo"<<num;
  //  }
  // auto a = 3;
  // float b = 4.0f;
  // double c = 8.0;
  //
  // auto resultado = a+b;
  //
  // cout << typeid(resultado).name();

  int a=10;
  int b=20;
  int c=30;

  auto media = (a+b+c)/3;

  cout << "La media es "<<media<<endl;
  cout << "El tipo de dato de media es: "<<typeid(media).name()<<endl;
  return 0;
   
}
