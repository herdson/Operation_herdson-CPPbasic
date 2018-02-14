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
  TCL* ps = new TCL;
  cout << "Ok... Do you remember of pizza's radius?: ";
  cin >> ps->rad;
  cout << "I need more info. Can you tell me company name?: ";
  cin.getline(ps->company, 20);
  cout << "Last, tell me pizza's weight: ";
  cin >> ps->mass;

  cout << ps->company << " " << ps->rad << " "
  << ps->mass << "\n";

  delete ps;
}
