#include <iostream>

using namespace std;

double probability(int numbers, int picks);

int main()
{
  int field_choices, mega_choices, field_picks;
  int mega_picks = 1;
  cout << "Enter the number of choices: "; 
  while (!(cin >> field_choices) || (field_choices <= 0))
  {
     cin.clear();
     while (cin.get() != '\n')
	continue;
     cout << "Enter the number of choices: ";
  }
  cout << "Enter the number of picks: ";
  while (!(cin >> field_picks) || (field_picks <= 0))
  {
     cin.clear();
     while (cin.get() != '\n')
	continue;
     cout << "Enter the number of picks: ";
  }
  cout << "Enter the number of Mega choices: ";
  while (!(cin >> mega_choices) || (mega_choices <= 0))
  {
     cin.clear();
     while (cin.get() != '\n')
	continue;
     cout << "Enter the number of Mega choices: ";
  }
  double field_odds = probability(field_choices, field_picks);
  double mega_odds = probability(mega_choices, mega_picks);
  double totals_odds = field_odds * mega_odds;
  cout << "Odds for just normal lotto: 1 in " << field_odds << ".\n";
  cout << "Odds for just Mega lotto: 1 in " << mega_odds << ".\n";
  cout << "Odds for winning entire lotto: 1 in " << totals_odds << ".\n";
  return 0;
}

double probability(int numbers, int picks)
{
  double result = 1.0;
  double n;
  unsigned p;
  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
  return result;
}
