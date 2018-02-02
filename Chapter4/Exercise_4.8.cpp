#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
  string name;
  float diameter;
  float weight;
};

int main()
{
  Pizza* p_pizza = new Pizza;
  cout << "Enter the name of pizza: ";
  getline(cin, p_pizza->name);
  cout << "Enter the diameter of pizza: ";
  cin >> p_pizza->diameter;
  cout << "Enter the weight of pizza: ";
  cin >> p_pizza->weight;

  cout << p_pizza->name << ", "
       << p_pizza->diameter << ", "
       << p_pizza->weight << endl;
  delete p_pizza;
  return 0;
}
