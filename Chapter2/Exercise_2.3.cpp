#include <iostream>

void mice();
void run();

int main()
{
  mice();
  mice();
  run();
  run();
  return 0;
}

void mice()
{
  std::cout << "Three blind mice.\n";
}

void run()
{
  std::cout << "See how they run.\n";
}
