#include <iostream>

using namespace std;

const int FACTOR = 12;

int main()
{
  int heigh;
  cout << "Enter your heigh in inches: ___\b\b\b";
  cin >> heigh;
  cout << "Your heigh: " << heigh/FACTOR << "'" << heigh%FACTOR << "\n";
  return 0;
}
