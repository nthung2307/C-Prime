#include <iostream>
#include "sales.h"

namespace SALES
{
  void setSales(Sales & s, const double ar[], int n)
  {
    int i = 0;
    while ((i < 4)&&(i < n))
    {
      s.sales[i] = ar[i];
      i++;
    }
    s.average = s.max = s.min = s.sales[0];
    for (int j = 1; j < 4; j++)
    {
      s.average += s.sales[j];
      if (s.max < s.sales[j]) s.max = s.sales[j];
      if (s.min > s.sales[j]) s.min = s.sales[j];
    }
    s.average /= QUARTERS;
  }

  void setSales(Sales & s)
  {
    using namespace std;
    cout << "Enter sale's information:\n";
    int i = 0;
    while (i < 4)
    {
      cout << "QUARTER #" << i + 1 << ": ";
      while (!(cin >> s.sales[i]))
      {
        cin.clear();
        while (cin.get() != '\n')
	   continue;
      }
      i++;
    }
    s.average = s.max = s.min = s.sales[0];
    for (int j = 1; j < 4; j++)
    {
      s.average += s.sales[j];
      if (s.max < s.sales[j]) s.max = s.sales[j];
      if (s.min > s.sales[j]) s.min = s.sales[j];
    }
    s.average /= QUARTERS;
  }

  void showSales(const Sales & s)
  {
    using namespace std;
    cout << "Sales: ";
    for (int i = 0; i < 4; i++)
      cout << s.sales[i] << " ";
    cout << "\n";
    cout << "Average: " << s.average << " - "
         << "Maximum: " << s.max << " - "
         << "Minimum: " << s.min << endl;
  }
}
