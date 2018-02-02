#include <iostream>

using namespace std;

const int SECOND_PER_MINUTE = 60;
const int MINUTE_PER_DEGREE = 60;

double latitude(double, double, double);

int main()
{
  double degrees, minutes, seconds;
  cout << "Enter a latitude in degrees, minutes, seconds:\n";
  cout << "First, enter the degrees: ";
  cin >> degrees;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;
  cout << degrees << " degrees, "
       << minutes << " minutes, "
       << seconds << " seconds = "
       << latitude(degrees, minutes, seconds) << " degrees\n";
  return 0;
}

double latitude(double degrees, double minutes, double seconds)
{
  return (degrees + (minutes/MINUTE_PER_DEGREE) + (seconds/SECOND_PER_MINUTE/MINUTE_PER_DEGREE));
}
