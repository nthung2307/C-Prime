#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
  char * str; // points to a string
  int ct;     // length of string (not counting '\n');
};

//prototypes for set(), show(), and show () go here
void set(stringy & str, char * s);
void show(const stringy & str, int n = 1);
void show(const char * stry, int n = 1);

int main()
{
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";

  set(beany, testing); // first argument is a reference,
		       // allocates space to hold copy of testing,
 		       // sets str member of beany to point to the
		       // new block, copies testing to new block,
		       // and sets ct member of beany
  show(beany);         // prints member string once
  show(beany, 2);      // print member string twice
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);       // prints testing string once
  show(testing, 3);    // prints testing string thrice
  show("Done!");
  return 0;
}

void set(stringy & stry, char * str)
{
  char * s = new char[strlen(str)];
  stry.str = s;
  strcpy(s, str);
  stry.ct = strlen(stry.str);
}

void show(const stringy & stry, int n)
{
  if (n > 1)
  {
     for (int i = 0; i < n; i++)
       cout << stry.str << endl;
  }
  else cout << stry.str << endl;
}

void show(const char * str, int n)
{
  if (n > 1)
  {
    for (int i = 0; i < n; i++)
       cout << str << endl;
  }
  else cout << str << endl;
}
