#include <iostream>
#include <cstring>

int main()
{
  using namespace std;
  char first_name[20];
  char last_name[20];
  char info[50];
  
  cout << "Enter your first name: ";
  cin.getline(first_name, 20);
  cout << "Enter your last Name: ";
  cin.getline(last_name, 20);
  strcpy(info, last_name);
  strcat(info, ", ");
  strcat(info, first_name);
  cout << "Here's the information in a single string: " << info << endl;
  return 0; 
}
