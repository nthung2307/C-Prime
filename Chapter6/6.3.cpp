#include <iostream>

using namespace std;

void show_menu();
void carnivore();
void pianist();
void tree();
void game();

int main()
{
  show_menu();
  char ch;
  cin >> ch;
  while (ch != 'q' && ch != 'Q')
  {
    switch (ch)
    {
      case 'c':
      case 'C':
	carnivore();
	break;
      case 'p':
      case 'P':
	pianist();
	break;
      case 't':
      case 'T':
	tree();
	break;
      case 'g':
      case 'G':
	game();
	break;
      default:
	cout << "Please enter a c, p, t, or g: ";
	break;
    }
    cin >> ch;
  }  
  return 0;
}

void show_menu()
{
  cout << "Please enter one of the following choices:\n";
  cout << "c) carnivore		p) pianist\n";
  cout << "t) tree		g) game\n";
  cout << "q) quit\n";
}

void carnivore()
{
  cout << "A lion is a carnivore.\n";
}

void pianist()
{
  cout << "Richar Clayderman is a pianist.\n";
}

void tree()
{
  cout << "A maple is a tree.\n";
}

void game()
{
  cout << "Super Mario is a game.\n";
}
