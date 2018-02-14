#include<iostream>

using namespace std;

struct TCL
{
  char company[20];
  float rad;
  int mass;
};

int main()
{
  TCL pizza;
  cout << "I need info. Can you tell me company name?: ";
  cin.getline(pizza.company, 20);
  cout << "Ok... Do you remember of pizza's radius?: ";
  cin >> pizza.rad;
  cout << "Last, tell me pizza's weight: ";
  cin >> pizza.mass;

  cout << pizza.company << " " << pizza.rad << " "
  << pizza.mass << "\n";

}
