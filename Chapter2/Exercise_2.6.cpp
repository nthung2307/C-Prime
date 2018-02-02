#include <iostream>

void time_print(int, int);

int main()
{
  int hours, minutes;
  std::cout << "Enter the number of hours: ";
  std::cin >> hours;
  std::cout << "Enter the number of minutes: ";
  std::cin >> minutes;
  time_print(hours, minutes);
  return 0;
}

void time_print(int hours, int minutes)
{
  std::cout << "Time: " << hours << ":" << minutes << "\n";
}
