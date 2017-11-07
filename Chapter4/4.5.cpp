#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
  string name;
  float weight;
  int calorie;
};

int main()
{
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  cout << "Name: " << snack.name 
       << ", Weight: " << snack.weight
       << ", Calorie: " << snack.calorie << endl;
  return 0;
}
