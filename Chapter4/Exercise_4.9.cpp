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
  CandyBar* snack = new CandyBar[3];
  snack[0].name = "Mocha Munch";
  snack[0].weight = 2.3; 
  snack[0].calorie = 350;
  
  snack[1].name = "El Pulga";
  snack[1].weight = 10.1;
  snack[1].calorie = 400;

  snack[2].name = "El Jefecito";
  snack[2].weight = 3.2;
  snack[2].calorie = 510;

  print_info(snack[0]);
  print_info(snack[1]);
  print_info(snack[2]);
  delete [] snack; 
  return 0;
}

void print_info(CandyBar snack)
{
  cout << snack.name << ", "
       << snack.weight << ", "
       << snack.calorie << endl;
}
