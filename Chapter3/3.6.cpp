#include <iostream>

using namespace std;

const double KM_TO_MILE = 62.14;
const double GALLON_TO_LITER = 3.875;

int main()
{
  double consumption;
  cout << "Enter an automobile gasoline consumption in European style (l/100km): ";
  cin >> consumption;
  cout << consumption << " l/100km = ";
  cout << (100 * GALLON_TO_LITER) / (consumption * 100 / KM_TO_MILE)  << " mpg in US style\n";
  return 0;
}
