#include <iostream> 


using namespace std;


int main (){

  int num {};

  cout << "INTRODUCE UN NUMERO : ";
  cin >> num;
  
  // if (num % 2 == 0){
  //   cout << "EL NUMERO ES PAR";
  // }else{
  //   cout << "EL NUMERO ES IMPAR";
  // }


  cout << num << " ES " << ((num%2==0)? "ES PAR": "ES IMPAR");
  return 0;  
}

