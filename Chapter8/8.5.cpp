#include <iostream>

using namespace std;

template <class T>
T max(T a[]);

int main()
{
  int int_ar[5] = {6, 3, 5, 0, 2};
  double double_ar[5] = {0.4, 0.6, 1.5, 2.3, 0.6 };
  cout << "Array of int: ";
  for (int i = 0; i < 5; i++)
    cout << int_ar[i] << " ";
  cout << "The max of array: " << max(int_ar) << endl;
  
  cout << "Array of double: ";
  for (int i = 0; i < 5; i++)
    cout << double_ar[i] << " ";
  cout << "The max of array: " << max(double_ar) << endl;
  return 0;
}

template <class T>
T max(T a[])
{
  T max = a[0];
  for (int i = 1; i < 5; i++)
  {
    if (a[i] > max) max = a[i];
  }
  return max;
}
