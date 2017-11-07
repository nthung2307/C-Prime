#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  double dalphe_invest, dalphe_interest;
  double cleo_invest, cleo_interest;
  dalphe_invest = cleo_invest = 100;
  dalphe_interest = 0.1;
  cleo_interest = 0.05;
  cout << "Dalphe invests $" << dalphe_invest << " at " << dalphe_interest << " simple interest.\n";
  cout << "Cleo invests $" << cleo_invest << " at " << cleo_interest << " compound interest.\n";
  while (dalphe_invest >= cleo_invest)
  {
    dalphe_invest += 100 * dalphe_interest;
    cleo_invest += cleo_invest * cleo_interest;
    count++; 
  }
  cout << "After " << count << " years, the value of Cleo's investment to exceed the value of Dalphe's investment.\n";
  cout << "Cleo's invest: $" << cleo_invest << endl;
  cout << "Dalphe's invest: $" << dalphe_invest << endl;
  return 0;
}
