#include <iostream>

using namespace std;

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display(box Box);
void calculate_volume(box * Box);

int main()
{
  box Box = {"Xbox", 10, 10, 10};
  calculate_volume(&Box);
  display(Box);
  return 0;
}

void display(box Box)
{
  cout << "Make: " << Box.maker
       << " Height: " << Box.height
       << " Width: " << Box.width
       << " Length: " << Box.length
       << " Volume: " << Box.volume << "\n";
}

void calculate_volume(box * Box)
{
  Box->volume = Box->height * Box->width * Box->length;
}

