#include <iostream>

using namespace std;

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main()
{
  double x, y;
  cout << "Enter a pair of number: ";
  cin >> x >> y;
  cout << x << " + " << y << " = " << calculate(x, y, add) << "\n";
  cout << x << " - " << y << " = " << calculate(x, y, sub) << "\n";
  cout << x << " * " << y << " = " << calculate(x, y, mul) << "\n";
  cout << x << " / " << y << " = " << calculate(x, y, div) << "\n";
  return 0;
}

double add(double x, double y)
{
  return x + y;
}

double sub(double x, double y)
{
  return x - y;
}

double mul(double x, double y)
{
  return x * y;
}

double div(double x, double y)
{
  return x / y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
  return (*pf)(x,y);
}
