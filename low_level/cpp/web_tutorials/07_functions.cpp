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

int givAdd(int a, int b)
{
	return a + b;
}
int givSub(int a, int b)
{
	return a - b;
}
int givMul(int a, int b)
{
	return a * b;
}
int givDiv(int a, int b)
{
	return a / b;
}
int main() {
   // string mensage = "This is a test message";
   //
   //  doPrint(mensage);
   //
   //
   //  std::cout << "Starting main()\n";
   //
   //  doA();
   //
   //  std::cout << "Ending main()\n";
   //
   //
   //
   // void foo() // Illegal: this function is nested inside function main()
   //  {
   //      std::cout << "foo!\n";
   //  }
   //
   //  foo(); // function call to foo()
  

  std::cout
		<< "Two Numbers for math: ";
	int getA{};
	int getB{};
	int pickOpp{};

	std::cin
		>> getA
		>> getB;

	std::cout
		<< "What kinda maths, 1 = add, 2 = sub, 3 = mul, 4 = div.\n"
		<< "All other numbers will Div.\n";

	std::cin
		>> pickOpp;

	if (pickOpp <= 1)
	{
		std::cout
			<< givAdd(getA, getB);
	}
	else if (pickOpp == 2)
	{
		std::cout
			<< givSub(getA, getB);
	}
	else if (pickOpp == 3)
	{
		std::cout
			<< givMul(getA, getB);
	}
	else
	{
		std::cout
			<< givDiv(getA, getB);
	}

  return 0;
}
