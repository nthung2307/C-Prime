#include <iostream>

template <class T>
void ShowArray(T arr[], int n);

template <class T>
void ShowArray(T * arr[], int n);

template <class T>
T Sum(T arr[], int n);

template <class T>
T Sum(T * arr[], int n);

struct debts
{
  char name[50];
  double amount;
};

int main()
{
  using namespace std;
  int things[6] = {13, 31, 103, 301, 310, 130};
  struct debts mr_E[3] = 
  {
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe" , 1300.0},
    {"Iby Stout", 1800.0}
  };
  double * pd[3];

  // set pointers to the amount members of the structures in the arr mr_E
  for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;

  cout << "Listing Mr.E's counts of things:\n";
  // things is an array of int
  ShowArray(things, 6);
  cout << "Total number of things: " << Sum(things, 6) << endl;

  cout << "Listing Mr.E's debts:\n";
  // pd is an array of pointers to double
  ShowArray(pd, 3);
  cout << "The sum of all the debts: " << Sum(pd, 3) << endl;
  return 0;
}

template <class T>
void ShowArray(T arr[], int n)
{
  using namespace std;
  for (int i = 0; i < n; i++)
     cout << arr[i] << ' ';
  cout << endl;
}


template <class T>
void ShowArray(T * arr[], int n)
{
  using namespace std;
  for (int i = 0; i < n; i++)
    cout << *arr[i] << ' ';
  cout << endl;
}

template <class T>
T Sum(T arr[], int n)
{
  T sum = arr[0];
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}

template <class T>
T Sum(T * arr[], int n)
{
  T sum = *arr[0];
  for (int i = 0; i < n; i++)
    sum += *arr[i];
  return sum;
}
