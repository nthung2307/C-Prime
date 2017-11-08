#include <iostream>

using namespace std;

const double MILE_TO_KM = 1.6093;
const double GALLON_TO_LITRE = 3.7854;

int main()
{
  double miles, gallons, mpg;
  cout << "How many miles you have driven: ";
  cin >> miles;
  cout << "How many gallons of gasoline you have used: ";
  cin >> gallons;
  mpg = miles/gallons;
  cout << "Your automobile gasoline consumption.\n";
  cout << "US style : " << mpg << " mpg\n";
  cout << "European style: " << 100 * (gallons * GALLON_TO_LITRE) / (miles * MILE_TO_KM) << " l/100km\n";
  return 0;
}
