#include <iostream>
#include <math.h>

const double FOOT_TO_INCHE = 12;
const double INCHE_TO_METER = 0.0254;
const double POUND_TO_KG = 2.2;

double calculate_BMI(double, double, double);

using namespace std;

int main()
{
  double feet, inches, weight;
  cout << "Enter your heigh in feet and inches.\n";
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
  cout << "Enter your weight in pounds: ";
  cin >> weight;
  cout << "Your BMI: " << calculate_BMI(feet, inches, weight) << "\n";
  return 0;
}

double calculate_BMI(double feet, double inches, double weight)
{
  double height;
  height = ((feet * FOOT_TO_INCHE) + inches) * INCHE_TO_METER;
  weight = weight/POUND_TO_KG;
  return weight/pow(height,2);
}

