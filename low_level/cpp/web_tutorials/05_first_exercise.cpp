#include <iostream>
using namespace std;

int multiply(int number){
  return number * 2;
}

int main(){
  int number;
  cout << "Enter a number: ";
  cin >> number;

  cout << "\nYour number is: " <<number<<".\n";

  return 0;
}
