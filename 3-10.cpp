#include<array>
#include<iostream>

using namespace std;

int main()
{
  cout << "Input your scores(3): ";
  array<float, 3> a;

  cin >> a[0] >> a[1] >> a[2];

  cout << (a[0]+a[1]+a[2])/3;
}
