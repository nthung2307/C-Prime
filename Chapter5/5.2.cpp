#include <iostream>

using namespace std;

int main()
{
  int number, sum;
  sum = 0;
  cout << "Enter the number (0 to quit): ";
  cin >> number;
  while (number !=0)
  {
    sum += number;
    cout << "The cumulative sume of enties to date: " << sum << endl;
    cout << "Enter the number (0 to quit): ";
    cin >> number;
  }
  return 0;
}
