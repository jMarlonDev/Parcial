/*
Seccion C Crear las funciones pedidas
*/

#include <iostream>
using namespace std;

/*
Programa solo las funciones pedidas. Puedes probar mentalmente con casos de ejemplo.
Firma: int max3(int a, int b, int c);
Devuelve el mayor de tres enteros usando if/else
*/

int maximo(int a, int b, int c)
{
  int mayor = a;

  if (b > mayor && b > c)
    return b;

  if (c > mayor && c > b)
    return c;

  return mayor;
}

/*
sumaRango(int a, int b);
Devuelve la suma de todos los enteros en [a, b] (se asume a <= b) usando un bucle
*/

int sumaRango(int inicio, int fin)
{
  int resultado = 0;

  for (int i = inicio; i <= fin; i++)
  {
    resultado += i;
  }

  return resultado;
}

/*
void tablaMultiplicar(int n);
Imprime la tabla de n del 1 al 10 con el formato exacto: n x i = resultado (un renglón por i).
Use una función recursiva para hacerlo sinel bucle
*/
void tablaMultiplciar(int n, int index = 1)
{
  if (index >= 11)
    return;

  cout << n << " * " << index << " = " << n * index << "\n";
  tablaMultiplciar(n, index + 1);
}

int main()
{
  int a, b, c;
  cout << "Ingresa el primer número: ";
  cin >> a;

  cout << "Ingresa el segundo número: ";
  cin >> b;

  cout << "Ingresa el tercer número: ";
  cin >> c;

  // Primera función
  cout << "El número mayor es: " << maximo(a, b, c) << "\n";

  // Segunda función
  int inicio, fin;

  cout << "Ingrese el número inicial para la sumatoria: ";
  cin >> inicio;

  cout << "Ingrese el número final para la sumatoria: ";
  cin >> fin;

  cout << "Suma total en el rango de números ingresados es: " << sumaRango(inicio, fin) << "\n";

  cout << "\n";

  // Cuarta función
  tablaMultiplciar(5);

  cout << "\n";
  return 0;
}
