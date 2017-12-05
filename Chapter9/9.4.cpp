#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
  using namespace SALES;
  double ar[4] = {12.5, 13.6, 11.4, 10.7};

  // using the non-interactive version  
  std::cout << "Using the non-interactive version.\n";
  Sales s1;
  setSales(s1, ar, 4);
  showSales(s1);

  // using the interactive version
  cout << "\nUsing the interactive version.\n";
  Sales s2;
  setSales(s2);
  showSales(s2);
  return 0;
}
