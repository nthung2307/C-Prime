#include <iostream>
#include <cstring>

struct Pizza
{
  char name[20];
  float diameter;
  float weight;
};

int main()
{
  using namespace std;
  Pizza pizza;
  cout << "Enter the name of pizza: ";
  cin.getline(pizza.name, 20);
  cout << "Enter the diameter of pizza: ";
  cin >> pizza.diameter;
  cout << "Enter the weight of pizza: ";
  cin >> pizza.weight;

  cout << pizza.name << ", "
       << pizza.diameter << ", "
       << pizza.weight << endl;

  return 0;
}
