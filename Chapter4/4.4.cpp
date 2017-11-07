#include <iostream>
#include <string>

using namespace std;

string get_info(string, string);

int main()
{
  string first_name, last_name, info;
  cout << "Enter your first name: ";
  getline(cin, first_name);
  cout << "Enter your last name: ";
  getline(cin, last_name);
  info = get_info(first_name, last_name);
  cout << "Here's the information in a single string: " << info << endl;
  return 0;
}

string get_info(string first_name, string last_name)
{
  return last_name + ", " + first_name;
}
