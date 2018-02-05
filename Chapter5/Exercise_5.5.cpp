#include <iostream>
#include <string>

using namespace std;

int main()
{
  string year[3] = {"first", "second", "third"};
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
	"December"};
  int book[3][12];
  int sum[3] = {0};
  int sum_combined = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      cout << "Number of books sales in " << month[j] 
	   << " of " << year[i] << " year: ";
      cin >> book[i][j];
      sum[i] += book[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    cout << "The total sales of the " << year[i] 
	 << " year: " << sum[i] << endl;
    sum_combined += sum[i];
  }
  cout << "The total sales : " << sum_combined << endl;
  return 0;
}
