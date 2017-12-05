#include <iostream>
#include <cstring>
#include "golf.h"

const int ArSize = 10;

int main()
{
  using namespace std;
  
  // using the non-interactive version
  cout << "Using the non-interactive version.\n";
  golf ann;
  setgolf(ann, "Ann Birdfree", 24);
  showgolf(ann);
 
  // using the interactive version
  golf golfAr[ArSize];
  cout << "\nUsing the interactive version.\n";
  cout << "Please enter golf's information.\n";
  cout << "You may enter up to 10 (empty golf's name to terminate):\n"; 
  int count = 0;
  while (count < 10)
  {
    if (count < 10)
    {
      cout << "Golf #" << count + 1 << "\n";
      setgolf(golfAr[count]);
      if (strcmp(golfAr[count].fullname, "")) count++;
      else break;
    }
  }
  for (int i = 0; i < count; i++)
  showgolf(golfAr[i]);
  return 0;
}
