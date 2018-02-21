#include <iostream>

const int MAX = 10;

int main()
{
  using namespace std;
  double donation[10];
  cout << "Please enter your donation.\n";
  cout << "You may enter up to " << MAX  << " (non-numeric input to terminate):\n";
  cout << "Donate #1: ";
  int i = 0;
  int greater = 0;
  double total = 0.0;
  greater = 0;
  while ((i < 10) && (cin >> donation[i]))
  {
    if (++i < 10) cout << "Donate #" << i + 1 << ": ";
  }
  for (int j  =  0; j < i; j++)
    total += donation[j];
  cout << "The average donation: " << total / i << "\n";
  for (int j = 0; j  < i; j++)
  {
    if (donation[j] >= total / i) greater++;
  }
  cout << "There are " << greater << " donation larger than average.\n";
  return 0;
}
