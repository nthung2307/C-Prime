#include <iostream>

using namespace std;

int main()
{
  double income, tax;
  cout << "Enter your income (negative number or non-numeric to terminate): ";
  while (cin >> income)
  {
    if (income > 0)
    {
      tax = 0;
      if (income > 5000 && income <= 15000) tax = (income - 5000)*0.1;
      if (income > 15000 && income <= 35000) tax = 10000*0.1 + (income -15000)*0.15;
      if (income > 35000) tax = 10000*0.1 + 20000*0.15 + (income - 35000)*0.2;
      cout << "Here is your tax: " << tax << "\n"; 
      cout << "Next income (negative number or non-numeric to terminate): ";
    }
    else break;
  }
  cout << "Bye!\n";
  return 0;
}
