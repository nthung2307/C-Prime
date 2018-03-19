#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string word;
  char ch;
  int vowels, consonants, others;
  vowels = consonants = others = 0;
  cout << "Enter words (q to quit):\n";
  cin >> word;
  while (word != "q")
  {
     ch = tolower(word[0]);
     if (isalpha(ch))
     {
       if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
                     || ch == 'u')
          vowels++;
       else
          consonants++; 
     }   
     else
       others++;
     cin >> word;
  }
  cout << vowels << " words beginning with vowels\n";
  cout << consonants << " words beginning with consonants\n";
  cout << others << " others\n";
  return 0;
}
