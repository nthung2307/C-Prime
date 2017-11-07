#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  cout << "Please enter your characters (@ to quit): ";
  char ch;
  cin >> ch;
  while (ch != '@')
  {
    if (isalpha(ch))
    {
    	if (islower(ch)) cout << (char) toupper(ch);
        else cout << (char) tolower(ch);
    }
    cin >> ch;
  }
  cout << "\nBye.\n";
  return 0;
}
