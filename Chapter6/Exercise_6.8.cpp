#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

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
  char ch;
  inFile >> ch;
  int count = 0;
  while (!inFile.eof())
  {
    count++;
    inFile >> ch;
  }
  cout << "The number of characters in file: " << count << ".\n";
  return 0;
}
