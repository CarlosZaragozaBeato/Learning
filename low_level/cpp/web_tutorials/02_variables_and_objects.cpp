#include <iostream>

using namespace std; 

int main(){

  int x = 150;
  double m = 0.6;
  double b = 4.4;

  double y = x * m + b;

  cout << "The value of y is: " << y << endl;
  

  // double pi {3.14159};
  // double gravity {9.8};
  // double phi {1.6180};
  //
  // cout << pi << "\n";
  // cout << phi << "\n";
  
  
  [[maybe_unused]] double pi { 3.14159 };
  [[maybe_unused]] double gravity { 9.8 };
  [[maybe_unused]] double phi { 1.61803 };

  cout << pi << '\n';
  cout << phi << '\n';

  return 0;
}
