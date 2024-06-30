#include <iostream> 

using namespace std;


int main (){

  double value_1 = 150;
  double value_2 = 55;
  int category = 1;

  switch (category) {

    case 1:
      cout << value_1 + value_2;
    break;
    
    case 2:
      cout << value_1 - value_2;
    break; 

    case 3:
      cout << value_1 * value_2;
    break;

    case 4:
      cout << value_1 / value_2;
    break;
    default:
      cout << "NO CATEGORY";
  }


  return 0;

}
