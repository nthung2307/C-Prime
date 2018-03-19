#include <iostream>

int main()
{
  using namespace std;
  cout << "Enter a distance in furlongs : ";
  double furlongs; 
  cin >> furlongs;
  double feet;
  feet = 220 * furlongs; 
  cout << furlongs  << " furlongs = "
       << feet << " feet\n";
  return 0;
}
