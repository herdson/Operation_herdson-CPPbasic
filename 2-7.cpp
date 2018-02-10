#include<iostream>

using namespace std;

int main()
{
  double liter;
  cout << "휘발유를 얼마나 쓰셨습니까?: ";
  cin >> liter;

  double literperkilo(100/liter);

  cout << "리터당 " << literperkilo << " 주행합니다.\n";

  cout << "변환값은 " << literperkilo*0.6214*3.875;
}
