#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
  char input[100];
  int words = 0;
  cout << "Enter words (to stop, type the word done):" << endl;
  cin >> input;
  while (strcmp(input,"done")!=0)
  {
    cin >> input;
    words++;
  };
  cout << "You entered a total of " << words << " words " << endl;
  cin.get();
  return 0;
}
