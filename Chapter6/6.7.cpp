#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Enter words (@ to terminate): ";
  string word;
  int vowels, consonants, others;
  vowels = consonants = others = 0;
  while (cin >> word && word[0] != '@')
  {
    if (isalpha(word[0]))
    {
      switch (word[0])
      {
        case 'a':
	case 'e':
	case 'i':
 	case 'o':
	case 'u':
	  vowels++;
	  break;
	default:
	  consonants++;
	  break;
      }
    }
    else others++;
    cin.get();
  }
  if (vowels > 0) cout << vowels << " words beginning with vowels.\n";
  if (consonants > 0) cout << consonants << " word beginning with consonants.\n";
  if (others > 0) cout << others << " others.\n";
  return 0;
}
