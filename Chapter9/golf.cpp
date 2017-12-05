#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
  strcpy(g.fullname, name);
  g.handicap = hc;
}

int setgolf(golf & g)
{
  using namespace std;
  cout << "Name: ";
  cin.getline(g.fullname, Len);
  cout << "Handicap: ";
  while (!(cin >> g.handicap))
  {
    cin.clear();
    while (cin.get() !='\n')
      continue;
    cout << "Enter handicap of golf: ";
  } 
  cin.get();
  if(strcmp(g.fullname, "\0")) return 1;
  else return 0;
}

void handicap(golf & g, int hc)
{
  g.handicap = hc;
}

void showgolf(const golf & g)
{
  using namespace std;
  cout << "Name: " << g.fullname << " - Handicap: " << g.handicap << endl;
}
