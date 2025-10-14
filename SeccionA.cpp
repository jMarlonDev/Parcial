/*
Preguntas selección multiple Sección A

[1]. R// B
[2]. R// B
[3]. R// B
[4].R// D Comportamiento indefinido
[5].R// B Se ejecuta al menos una vez.
[6].R// C cin >> a >> b;
[7].R// A 11
[8].R// B void f(int& n);
[9].R// B Salta a la siguiente iteración.
[10].R// A. (3 == 3) && !(2 > 5)
*/

#include <iostream>
using namespace std;

void f(int &n)
{
  cout << n << "\n";
}

int main()
{
  bool a = true;
  bool b = false;
  int x = 3;
  int A, B;

  cout << 7 / 2 << " " << 7 / 2.0; // Salida 3 3.5
  cout << "\n";

  cout << (a && b) << " " << (a || b) << " " << (!b); // Salida 0 1 1

  cout << "\n";

  cin >> A >> B;

  // Función donde se le pasa la referencia de la dirección de memoria de la variable n
  int n = 12;
  f(n);

  return 0;
}
