#include <iostream>

using namespace std;

struct CandyBar
{
  char * name;
  float weight;
  int calories;
};

void set(CandyBar & candy, char * brand = "Millennium Munch", float weight = 2.85, int calories = 350);

void print(const CandyBar & candy);

int main()
{
  CandyBar candy;
  set(candy);
  print(candy);
}

void set(CandyBar & candy, char * name, float weight, int calories)
{
  candy.name = name;
  candy.weight = weight;
  candy.calories = calories;
}

void print(const CandyBar & candy)
{
  cout << candy.name << " "
       << candy.weight << " "
       << candy.calories << endl;
}

