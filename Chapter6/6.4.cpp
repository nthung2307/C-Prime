#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct BOP
{
  string fullname;
  string title;
  string bopname;
  int preference;
};

void show_menu();

int main()
{
  BOP bop[5] = 
  {
    "Cameron Anglin", "Senior Developer", "rundata", 1,
    "Bill Gates", "Quality Assurance", "Bill77", 2,
    "Larry Wall", "Debugger", "LW", 0,
    "Fusajiro Yamauchi", "Game Tester", "Yoshi", 1,
    "Bjarne Stroustrup", "The Creator", "C++", 0
  };
  show_menu();
  char choice;
  do 
  {
    cin >> choice;
    tolower(choice);
    if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd')
	continue;
    else
    {
      for (int i = 0; i < 5; i++)
      {
    	switch (choice)
      	{
          case 'a': cout << bop[i].fullname << "\n";
	    break;
          case 'b': cout << bop[i].title << "\n";
	    break;
          case 'c': cout << bop[i].bopname << "\n";
	    break;
	  case 'd': switch (bop[i].preference)
	    {
              case 0: cout << bop[i].fullname << "\n";
		break;
	      case 1: cout << bop[i].title << "\n";
		break;
	      case 2:
		break; cout << bop[i].bopname << "\n";
      	    }
	    break;
        }
      }      
    }
  } while (choice != 'Q' && choice != 'q');
  return 0;
}

void show_menu()
{
  cout << "Benevolent Order of Programmers Report:\n";
  cout << "a. display by name 		b. display by title\n";
  cout << "c. display by bopname  	d. display by preference\n";
  cout << "q. quit\n";
}
