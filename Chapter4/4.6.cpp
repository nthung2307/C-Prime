#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
  string name;
  float weight;
  int calorie;
};

void print_info(CandyBar);

int main()
{
  CandyBar snack[3] = 
  {
    {"Mocha Munch", 2.3, 350},
    {"El Pulga", 10.1, 400},
    {"El Jefecito", 3.2, 510}
  };
  print_info(snack[0]);
  print_info(snack[1]);
  print_info(snack[2]);
  return 0;
}

void print_info(CandyBar snack)
{
  cout << snack.name << ", "
       << snack.weight << ", "
       << snack.calorie << endl;
}
