/*
Segunda Sección predice la salida

[1]. R// 11
[2].R// 0 1 2
[3].R// Par
[4].R// 321
[5].R// 2 200
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 5, b = 2;

  cout << a + b * 3 << "\n";

  int n = 0;
  while (n < 3)
  {
    cout << n << " ";
    n++;
  }

  cout << "\n";

  int x = 10;
  if (x % 2 == 0)
    cout << "par";
  else
    cout << "impar";

  cout << "\n";

  int i = 3;
  do
  {
    cout << i--;
  } while (i > 0);

  cout << "\n";

  int z = 1;
  int w = (z++ > 1) ? 100 : 200;
  cout << z << " " << w;

  return 0;
}
