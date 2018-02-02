#include <iostream>

double convert(double);

int main()
{
  using namespace std;
  double temperature;
  cout << "Please enter a Celsius value: ";
  cin >> temperature;
  cout << temperature << " degrees Celsius is " << convert(temperature) << " degress Fahrenheit.\n";
  return 0;
}

double convert(double temp)
{
  return 1.8 * temp + 32.0;
}
