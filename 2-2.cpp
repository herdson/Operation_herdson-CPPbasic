#include<iostream>
using namespace std;

float BMI(int feet, int inch, float found)
{
  const float meterparser(0.0254);
  const int inchparser(12);
  const float kiloconverter(2.2);

  float totalheight{ (inch + feet*inchparser) * meterparser };
  float weight(found*kiloconverter);

  return weight/(totalheight*totalheight);

}

int main()
{
  int feet, inch;
  float found;
  cout << "Write your height: ";
  cin >> feet >> inch;
  cout << "\n" << "Write your weight: ";
  cin >> found;

  cout << "Your BMI is " << BMI(feet, inch, found);

}
