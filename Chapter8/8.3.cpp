#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void to_upper(string str);

int main()
{
  string s;
  cout << "Enter a string (q to quit): ";
  getline(cin, s);
  while (s[0] != 'q')
  {
     to_upper(s);
     cout << "Enter a string (q to quit): ";
     getline(cin, s);
  }
  cout << "Bye.\n";
  return 0;
}

void to_upper(string str)
{
  for (int i = 0; i < str.size(); i ++)
  {
    if (isalpha(str[i])) str[i] = toupper(str[i]);
  }
  cout  << str << endl;
}
