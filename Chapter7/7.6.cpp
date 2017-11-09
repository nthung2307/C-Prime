#include <iostream>

using namespace std;

const int MAX = 5;

int fill_array(double values[], int size);
void show_array(double values[], int size);
void reverse_array(double values[], int size);

int main()
{
  double properties[MAX];
  int size;
  size = fill_array(properties, MAX);
  cout << "Array: "; show_array(properties, size);
  reverse_array(properties + 1, size - 2);
  cout << "Reverse array but the first and the last : "; show_array(properties, size);
  return 0;
}

int fill_array(double values[], int size)
{
  int i = 0;
  cout << "Enter value (non-numeric to terminate) #" << i + 1 << ": ";
  while (cin >> values[i])
  {
    i++;
    if (i == size) 
       break;
    cout << "Enter value (non-numeric to terminate) #" << i + 1 <<": ";
  }
  return i;  
}

void show_array(double values[], int size)
{ 
  for (int i = 0; i < size; i++)
  {
    cout << values[i] << " ";
  }
  cout << "\n";
}

void reverse_array(double values[], int size)
{
  double temp;
  for (int i = 0; i < size/2; i++)
  {
    temp = values[i];
    values[i] = values[size - i - 1];
    values[size - i - 1] = temp;
  }
}
