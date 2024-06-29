#include <iostream>

using namespace std;

void incrementar(int &num)
{
  num++;
}

void numerosPares(int numero)
{
  for (int i = 1; i <= numero; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}

int factorial(int n)
{
  int resultado = 1;
  int i = 1;
  while (i <= n)
  {
    resultado *= i;
    i++;
  }
  return resultado;
}

double celsiusAFahrenheit(double celsius)
{
  return (celsius * 9 / 5) + 32;
}

bool esPrimo(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

void calculadora()
{
  char operacion;
  double num1, num2;

  cout << "Introduce una operación (+, -, *, /): ";
  cin >> operacion;
  cout << "Introduce dos números: ";
  cin >> num1 >> num2;

  switch (operacion)
  {
  case '+':
    cout << "Resultado: " << (num1 + num2) << endl;
    break;
  case '-':
    cout << "Resultado: " << (num1 - num2) << endl;
    break;
  case '*':
    cout << "Resultado: " << (num1 * num2) << endl;
    break;
  case '/':
    if (num2 != 0)
    {
      cout << "Resultado: " << (num1 / num2) << endl;
    }
    else
    {
      cout << "Error: División por cero." << endl;
    }
    break;
  default:
    cout << "Operación no válida." << endl;
    break;
  }
}

int main()
{
  //   ### Semana 1: Fundamentos de C++
  // - **Día 1**: Introducción a C++, configuración del entorno de desarrollo.
  // - **Día 2**: Sintaxis básica, tipos de datos, variables y constantes.
  // - **Día 3**: Operadores aritméticos y lógicos.
  // - **Día 4**: Control de flujo (if, else, switch).
  // - **Día 5**: Bucles (for, while, do-while).
  // - **Día 6**: Funciones (declaración, definición y llamadas).
  // - **Día 7**: Repaso y ejercicios prácticos.

  // DIA 1
  cout << "HOLA MUNDO" << endl;

  // DIA 2
  int edad = 30;
  float altura = 1.80;
  char inicial = 'M';
  bool esEstudiante = true;

  // Declaración de constantes
  const int DIAS_EN_SEMANA = 7;
  constexpr int MESES_EN_ANO = 12;

  // Salida de datos
  cout << "Edad: " << edad << endl;
  cout << "Altura: " << altura << " metros" << endl;
  cout << "Inicial: " << inicial << endl;
  cout << "Es estudiante: " << (esEstudiante ? "Sí" : "No") << endl;
  cout << "Días en una semana: " << DIAS_EN_SEMANA << endl;
  cout << "Meses en un año: " << MESES_EN_ANO << endl;

  // DIA 3
  int x = 10, y = 20;
  bool resultado;

  // Operadores aritméticos
  int suma = x + y;
  int resta = y - x;
  int multiplicacion = x * y;
  int division = y / x;
  int modulo = y % x;

  // Operadores lógicos
  resultado = (suma > resta) && (multiplicacion > division); // true && true => true
  bool or_logico = (modulo == 0) || (x > y);                 // true || false => true
  bool not_logico = !(x < y);                                // !(true) => false

  // Salida de resultados
  cout << "Suma: " << suma << endl;
  cout << "Resta: " << resta << endl;
  cout << "Multiplicación: " << multiplicacion << endl;
  cout << "División: " << division << endl;
  cout << "Módulo: " << modulo << endl;
  cout << "Resultado AND lógico: " << resultado << endl;
  cout << "Resultado OR lógico: " << or_logico << endl;
  cout << "Resultado NOT lógico: " << not_logico << endl;

  // DÍA 4
  int numero;
  cout << "Introduce un número: ";
  cin >> numero;

  // Uso de if, else if y else
  if (numero > 0)
  {
    cout << "El número es positivo" << endl;
  }
  else if (numero < 0)
  {
    cout << "El número es negativo" << endl;
  }
  else
  {
    cout << "El número es cero" << endl;
  }

  // Uso de switch
  char letra;
  cout << "Introduce una letra (A, B, C): ";
  cin >> letra;

  switch (letra)
  {
  case 'A':
    cout << "Has introducido la letra A" << endl;
    break;
  case 'B':
    cout << "Has introducido la letra B" << endl;
    break;
  case 'C':
    cout << "Has introducido la letra C" << endl;
    break;
  default:
    cout << "Letra no reconocida" << endl;
    break;
  }

  // DÍA 5
  cout << "Bucle for:" << endl;
  for (int i = 1; i <= 10; i++)
  {
    cout << i << " ";
  }
  cout << endl;

  // Usando el bucle while
  cout << "Bucle while:" << endl;
  int j = 1;
  while (j <= 10)
  {
    cout << j << " ";
    j++;
  }
  cout << endl;

  // Usando el bucle do-while
  cout << "Bucle do-while:" << endl;
  int k = 1;
  do
  {
    cout << k << " ";
    k++;
  } while (k <= 10);
  cout << endl;

  // DIA 6
  int numero_bucle = 0;

  while (numero_bucle < 4)
  {

    cout << "NUMERO -> " << numero_bucle << endl;

    incrementar(numero_bucle);
  }

  // DIA 7
  numerosPares(20);
  //
  cout << "Introduce un número: ";
  cin >> numero;
  cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
  //
  double celsius;
  cout << "Introduce la temperatura en grados Celsius: ";
  cin >> celsius;
  cout << celsius << " grados Celsius son " << celsiusAFahrenheit(celsius) << " grados Fahrenheit." << endl;
  //
  int numero;
  cout << "Introduce un número: ";
  cin >> numero;
  if (esPrimo(numero))
  {
    cout << numero << " es un número primo." << endl;
  }
  else
  {
    cout << numero << " no es un número primo." << endl;
  }
  //
  calculadora();
  return 0;
}
