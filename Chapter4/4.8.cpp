#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
  string name;
  float diameter;
  float weight;
};

Pizza get_info();
void print_info(Pizza);

int main()
{
  Pizza* p_pizza = new Pizza;
  *p_pizza = get_info();
  print_info(*p_pizza);
  return 0;
}

Pizza get_info()
{
  Pizza pizza;
  cout << "Enter the name of pizza: ";
  getline(cin, pizza.name);
  cout << "Enter the diameter of pizza: ";
  cin >> pizza.diameter;
  cout << "Enter the weight of pizza: ";
  cin >> pizza.weight;
  return pizza; 
}

void print_info(Pizza pizza)
{
  cout << pizza.name << ", " 
       << pizza.diameter << ", "
       << pizza.weight << endl;
}


