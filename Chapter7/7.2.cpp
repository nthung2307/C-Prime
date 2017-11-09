#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int fill_scores(int scores[], int size);
void display_scores(int scores[], int size);
double average(int scores[], int size); 

int main()
{
  int scores[MAX_SIZE];
  int count;
  count = fill_scores(scores, MAX_SIZE);
  display_scores(scores, count);
  cout << average(scores, count) << "\n";
  return 0;
}

int fill_scores(int scores[], int size)
{
  int i = 0;
  cout << "Enter up to 10 golf scores (non numeric to terminate).\n";
  cout << "Score #" << i + 1 << ": ";
  while (cin >> scores[i])
  {
    i++;
    if (i == size)
       break;    
    cout << "Score #" << i + 1 <<": ";
  }
  return i;
}

void display_scores(int scores[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << scores[i] << " ";
  }
}

double average(int scores[], int size)
{
  double total = 0;
  for (int i = 0; i < size; i++)
  {
    total += scores[i];
  }
  return total/size;
}


