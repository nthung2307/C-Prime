#include <iostream>

int main()
{
  using namespace std;
  char ch;
  int count = 0;
  cin.get(ch);		// attemp to read a char
  while (cin.fail() == false) 	// test for EOF
  {
    cout << ch;		// echo character
    ++ count;
    cin.get(ch);	// attemp to read another char
  }
  cout << endl << count << " characters read\n";
  return 0;
}
