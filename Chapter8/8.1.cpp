#include <iostream>

using namespace std;

static int count = 0;

void print(char * str, int n = 1);

int main()
{
  print("Hello World!");
  print("I'm a C++ Program.");
  print("Nice to meet you.", 10);
  return 0;
}

void print(char * str, int n)
{
  if (n > 1)
  {
    for (int i = 0; i < count; i++)
	cout << str << endl;
  }
  else cout << str << endl;
  count++;
}


