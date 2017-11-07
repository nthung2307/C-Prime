#include <iostream>

double convert(double);

int main()
{
  using namespace std;
  double distance;
  cout << "Enter the number of light years: ";
  cin >> distance;
  cout << distance << " light years = " << convert(distance) << " astronimical units.\n";
  return 0;
}

double convert(double dist)
{
  return dist * 63240;
}
