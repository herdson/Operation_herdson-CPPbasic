#include<iostream>
using namespace std;

int main()
{
  const int parser(100);
  int height;
  cout << "Please input your height(cm): ";
  cin >> height;

  cout << "Your height is " << height/parser
  << "meter " << height%parser << "centimeter\n"; 
}
