#include<iostream>

using namespace std;

int main()
{
  cout << "Input 2 int value: ";
  int a, b;
  cin >> a >> b;
  int pluser(0);

  for( ; a<=b; ++a)
  {
    pluser += a;
  }

  cout << pluser << endl;

}
