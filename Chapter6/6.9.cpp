#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

struct  Contributor
{
  string name;
  double amount;
};

int main()
{
  cout << "Enter filename: ";
  char filename[50];
  cin.get(filename, 50);
  ifstream inFile;
  inFile.open(filename);
  if (!inFile.is_open())
  {
    cout << "Could not open the file " << filename << ".\n";
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }
  int size;
  inFile >> size;
  inFile.get();
  Contributor* contrib = new Contributor[size];
  for (int i = 0; i < size; i++)
  {
    getline(inFile, contrib[i].name);
    (inFile >> contrib[i].amount).get();
  }
  if (inFile.eof()) inFile.close();
  cout << "Grand Patrol\n";
  for (int i = 0; i < size; i++)
  {
    if (contrib[i].amount >= 10000)
      cout << contrib[i].name << " donated $" << contrib[i].amount << "\n";
  }
  cout << "Patrol\n";
  for (int i = 0; i < size; i++)
  {
    if (contrib[i].amount < 10000)
      cout << contrib[i].name << " donated $" << contrib[i].amount << "\n";
  }
  delete [] contrib;
  return 0;
}
