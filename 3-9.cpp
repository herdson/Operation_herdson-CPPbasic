#include<string>
#include<iostream>

using namespace std;

struct CandyBar
{
  string brand;
  float weight;
  int kcal;
};

int main()
{
  CandyBar* store = new CandyBar[3];
  string names[3] = {"SAMSUNG", "LG", "SONY"};
  float mass[3] = {23.09, 2.11, 20.9};
  int cal[3] = {120, 8029, 400};

  for(int i = 0; i<3; i++)
  {
    (store+i)->brand = names[i];
    (store+i)->weight = mass[i];
    (store+i)->kcal = cal[i];
  }

  for(int j = 0; j<3; j++)
  {
    cout << (store+j)->brand << " "
    << (store+j)->weight << " " << (store+j)->kcal << "\n";
  }

}
