#include <iostream>

using namespace std;

const int SECOND_PER_MINUTE = 60;
const int MINUTE_PER_HOUR = 60;
const int HOUR_PER_DAY = 24;

int main()
{
  long seconds, minutes, hours, days;
  cout << "Enter the number of seconds: ";
  cin >> seconds;
    cout << seconds << " seconds = ";
  days = seconds / (SECOND_PER_MINUTE*MINUTE_PER_HOUR*HOUR_PER_DAY);
  hours = (seconds % (SECOND_PER_MINUTE*MINUTE_PER_HOUR*HOUR_PER_DAY)) /(SECOND_PER_MINUTE*MINUTE_PER_HOUR);
  minutes = ((seconds % (SECOND_PER_MINUTE*MINUTE_PER_HOUR*HOUR_PER_DAY)) %(SECOND_PER_MINUTE*MINUTE_PER_HOUR)) / SECOND_PER_MINUTE;
  seconds = ((seconds % (SECOND_PER_MINUTE*MINUTE_PER_HOUR*HOUR_PER_DAY)) %(SECOND_PER_MINUTE*MINUTE_PER_HOUR)) % SECOND_PER_MINUTE;
  if (days > 0) cout << days << " days, ";
  if (hours > 0) cout << hours << " hours, ";
  if (minutes > 0) cout << minutes << " minutes, ";
  if (seconds > 0) cout << seconds << " seconds\n";
  return 0;
}
