#include <iostream>

using namespace std;


int operations (double number_1,double number_2, string operation){
  if(operation == "+"){
    return number_1 + number_2;
  }
   return number_1 - number_2;
}

int main (){

  string operation;
  int number_1, number_2;

  cout << "Enter the first number: ";
  cin >> number_1;
  cout << "\nEnter the second number: ";
  cin >> number_2;
  cout << "Enter the opration: ";
  cin >> operation;


  double value = operations(number_1, number_2, operation);

  cout << "\nThe Result is " << value; 

  return 0;
}
