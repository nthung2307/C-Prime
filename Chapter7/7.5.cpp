#include <iostream>

double factorial(int number);

int main()
{
  using namespace std;
  int number;
  cout << "Enter a number to find it's factorial (non numeric to quit): ";
  while (cin >> number)
  {
    cout << "Factorial " << number << " is " << factorial(number) << "\n";
    cout << "Enter a number to find it's factorial (non numeric to quit): "; 
  }
  return 0;
}

double factorial(int number)
{
  if (number == 0)
     return 1;
  return (double) number * factorial(number - 1);
}


