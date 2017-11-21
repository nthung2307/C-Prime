#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T max(T a[], int n);

template <> char * max(char * pchar[], int n);

int main()
{
  int int_ar[6] = {1, 5, 8, 11, 17, 2};
  double double_ar[4] = {1.2, 9.5, 3.4, 5.1};
  char * str[4] = {"Windows XP", "Windows Millennium", "Ubuntu 16.04", "Fedora"};
  cout << "Max of int: " << max(int_ar, 6) << endl;
  cout << "Max of double: " << max(double_ar, 4) << endl;
  cout << "The longest string: " << max(str, 4) << endl;
  return 0;
}

template <class T>
T max(T a[], int n)
{
  T max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max) max = a[i];
  return max;
}

template <> char * max(char * pchar[], int n)
{
  char * str = pchar[0];
  for (int i = 1; i < n; i++)
    if (strlen(pchar[i]) > strlen(str)) str = pchar[i];
  return str;
}
