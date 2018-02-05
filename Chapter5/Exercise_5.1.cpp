#include <iostream>

using namespace std;

int main()
{
  cout << "Enter two integers.\n";
  cout << "The first number: ";
  int first_number, second_number, sum;
  cin >> first_number;
  cout << "The second number (must greater than first number): ";
  cin >> second_number;
  while (first_number >= second_number)
  {
    cout << "The second number (must greater than first number): ";
    cin >> second_number;
  }
  sum = 0;
  for (int i = first_number; i <= second_number; i++)
    sum += i;
  cout << "The sum of all the integers from " 
       << first_number << " to " 
       << second_number << ": " << sum << endl;
  return 0;
}
