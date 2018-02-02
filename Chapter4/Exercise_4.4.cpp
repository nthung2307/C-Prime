#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string first_name, last_name, info;
  cout << "Enter your first name: ";
  getline(cin, first_name);
  cout << "Enter your last name: ";
  getline(cin, last_name);
  info = last_name + ", " + first_name;
  cout << "Here's the information in a single string: " << info << endl;
  return 0;
}
