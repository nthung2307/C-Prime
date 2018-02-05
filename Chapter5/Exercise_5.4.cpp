#include <iostream>
#include <string>

using namespace std;

int main()
{
  string month[12] = {
	"January", 
	"February", 
	"March", 
	"April", 
	"May", 
	"June", 
	"July", 
	"August", 
	"September", 
	"October", 
	"November", 
	"December"
  };
  int book[12];
  int sum = 0;
  for (int i = 0; i < 12; i++)
  {
    cout << "Number of books sales in " << month[i] << ": ";
    cin >> book[i];
    sum += book[i];
  }
  cout << "The total sales of the year: " << sum << endl;
  return 0;
}
