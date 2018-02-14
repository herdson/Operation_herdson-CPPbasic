#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
  string brand;
  float weight;
  int kcal;
};

int main()
{
  CandyBar snack = {"Mocha Munch", 2.3, 350};

  cout << snack.brand << " " << snack.weight << " "
  << snack.kcal << "\n";

}
