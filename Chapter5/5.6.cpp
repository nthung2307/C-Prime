#include <iostream>
#include <string>

using namespace std;

struct Car
{
  string name;
  int year;
};

int main()
{
  cout << "How many cars do you wish to catalog? ";
  int size;
  (cin >> size).get();
  Car* car = new Car[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Car #" << i + 1 << endl;
    cout << "Please enter the make: ";
    getline(cin, car[i].name);
    cout << "Please enter the year of made: ";
    (cin >> car[i].year).get();
  }
  cout << "Here is what in your collection.\n";
  for (int i = 0; i < size; i++)
    cout << car[i].year << " " << car[i].name << endl;
  delete [] car;
  return 0;
}
