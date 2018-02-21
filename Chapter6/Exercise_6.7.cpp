#include <iostream>
#include <cctype>

int main()
{
  using namespace std;
  cout << "Enter words (q to terminate): ";
  char ch;
  int vowels, consonants, others;
  vowels = consonants = others = 0;
  cin.get(ch);
  while (ch != 'q')
  {
    cin.get();
  }
  return 0;
}
