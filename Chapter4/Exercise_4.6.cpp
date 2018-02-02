#include <iostream>
#include <cstring>

struct CandyBar
{
  char name[20];
  float weight;
  int calorie;
};

int main()
{
  using namespace std;
  CandyBar snacks[3] = 
  {
    {"Mocha Munch", 2.3, 350},
    {"El Pulga", 10.1, 400},
    {"El Jefecito", 3.2, 510}
  };
  cout << snacks[0].name << ", " 
       << snacks[0].weight << ", "
       << snacks[0].calorie << endl;
  cout << snacks[1].name << ", "
       << snacks[1].weight << ", "
       << snacks[1].calorie << endl;
  cout << snacks[2].name << ", "
       << snacks[2].weight << ", "
       << snacks[2].calorie << endl;
  return 0;
}
