#include <iostream>

void first_function();
void second_function();

int main()
{
  first_function();
  first_function();
  second_function();
  second_function();
  return 0;
}

void first_function()
{
  std::cout << "Three blind mice.\n";
}

void second_function()
{
  std::cout << "See how they run.\n";
}
