#include <iostream>

using namespace std;

void doPrint(string mensage){
  cout << mensage<<"\n";
}
void doB()
{
    std::cout << "In doB()\n";
}


void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA()\n";
}
int main() {
   string mensage = "This is a test message";

    doPrint(mensage);


    std::cout << "Starting main()\n";

    doA();

    std::cout << "Ending main()\n";



   void foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }

    foo(); // function call to foo()
  return 0;
}
