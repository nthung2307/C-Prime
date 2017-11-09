#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int SLEN = 30;

struct student
{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

//getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the 
// number of elements of the array. The function solicits and
// stores data about studenets. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

//display1() takes a student structure as an argument
// and display its contents.
void display1(student st);

//display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2(const student * ps);

//display3() takes the address of the first element of an array
// of the student structures and the number of array elements as
// arguments and display the contents of the structures
void display3(const student pa[], int n);

int main()
{
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n')
    continue;

  student * ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for (int i = 0; i < entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete [] ptr_stu;
  cout << "Done.\n"; 
  return 0;
}

int getinfo(student pa[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i ++)
  {
    cout << "Student #" << i + 1 << "\n";
    cout << "Name: ";
    cin.getline(pa[i].fullname, SLEN);
    if (pa[i].fullname[0] != '\0')
    {
      cout << "Hobby: ";
      cin.getline(pa[i].hobby, SLEN);
      cout << "OOP Level: ";
      while (!(cin >> pa[i].ooplevel))
      {
      	cin.clear();
	while (cin.get() != '\n')
	  continue;
        cout << "OOP Level: ";
      }
      cin.get();
      count ++;
    }
    else break;
  }
  return count;
}

void display1(student stu)
{
  cout << stu.fullname << "\t\t"
       << stu.hobby << "\t\t"
       << stu.ooplevel << "\n";
}

void display2(const student * ps)
{
  cout << ps->fullname << "\t\t"
       << ps->hobby << "\t\t"
       << ps->ooplevel << "\n"; 
}

void display3(const student pa[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << pa[i].fullname << "\t\t"
	 << pa[i].hobby << "\t\t"
	 << pa[i].ooplevel << "\n";
  }
}
