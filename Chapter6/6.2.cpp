#include <iostream>

using namespace std;

int main()
{
  double donation[10];
  cout << "Please enter your donation.\n";
  cout << "You may enter up to 10 (non-numeric input to terminate):\n";
  cout << "Donate #1: ";
  int count, greater;
  double total, average;
  count  = 0;
  total = 0;
  greater = 0;
  while ((count < 10) && (cin >> donation[count]))
  {
    if (++count < 10) cout << "Donate #" << count + 1 << ": ";
  }
  for (int i  =  0; i < count; i++)
    total += donation[i];
  average = total/count; 
  cout << "The average donation: " << average << "\n";
  for (int i = 0; i < count; i++)
  {
    if (donation[i] >= average) greater++;
  }
  cout << "There are " << greater << " donation larger than average.\n";
  return 0;
}
