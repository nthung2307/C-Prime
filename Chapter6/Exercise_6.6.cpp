#include <iostream>
#include <string>

using namespace std;

struct  Contributor
{
  string name;
  double amount;
};

int main()
{
  cout << "Society for the Preservation of Rightful Influence\n";
  cout << "Enter the number of contributor: ";
  int size;
  double under, over;
  while (!(cin >> size))
  { 
    cin.clear();
    while (cin.get() != '\n')
	continue; 
    cout << "Enter the number of contributor: ";
  }
  Contributor* contrib = new Contributor[size];
  for (int i = 0; i < size; i++)
  {
    cin.get();
    cout << "Contributor #" << i + 1 << "\n";
    cout << "Name: ";
    getline(cin, contrib[i].name);
    cout << "Amount: $";
    while (!(cin >> contrib[i].amount))
    {
      cin.clear();
      while (cin.get() != '\n')
 	continue;
      cout << "Amount: $";
    }
  }
  cin.get();
  int grand_patrol = 0;
  cout << "Grand Patrol\n";
  for (int i = 0; i < size; i++)
  {
    if (contrib[i].amount >= 10000)
    {
      cout << contrib[i].name << " donated $" << contrib[i].amount << "\n";
      grand_patrol++;
    }
  }
  if (grand_patrol < size)
  {
    cout << "Patrol\n";
    for (int i = 0; i < size; i++)
    {
      if (contrib[i].amount < 10000)
        cout << contrib[i].name << " donated $" << contrib[i].amount << "\n";
    }
  }
  delete [] contrib;
  return 0;
}
