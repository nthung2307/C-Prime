#include <iostream>

double harmonic(int, int);

int main()
{
  using namespace std;
  int x, y;
  cout << "Enter pairs of number (zero to terminate):";
  while (cin >> x >> y)
  {
    if ((x != 0) && (y !=0))
    {
      cout << "The harmonic of " << x << " and " << y << " : " << harmonic(x,y) << "\n";
      cout << "Enter pairs of number (zero to terminate):";
    }
    else break;
  }
  cout << "Bye!\n";
  return 0;
}

double harmonic(int x, int y)
{
  return 2.0 * x * y / (x + y);
}
