#include <iostream>

using namespace std;

const int MAX = 5;

double * fill_array(double * start, double * end);
void show_array(const double * start, const double * end);
void revalue(double factor, double * start, double * end);

int main()
{
  double properties[MAX];
  double * end;
  end = fill_array(properties, properties + MAX);
  cout << "Array : "; show_array(properties, end);
  cout << "Enter revaluation factor: ";
  double factor;
  cin >> factor;
  revalue(factor, properties, end);
  cout << "Revalue array : "; show_array(properties, end);
  cout << "Done.\n";
  return 0;
}

double * fill_array(double * start, double * end)
{
  int i = 0;
  cout << "Value #" << i + 1 << ": ";
  while (cin >> *start)
  {
    i++;
    start++;
    if (start == end)
	break;
    cout << "Value #" << i + 1 <<": ";
  }
  return start;
}

void show_array(const double * start, const double * end)
{
  while (start != end)
  {
    cout << *start << " ";
    start++;
  }
  cout << "\n";
}

void revalue(double factor, double * start, double * end)
{
  while(start != end)
  {
    *start *= factor;
    start++;
  }
}

