#include<iostream>

using namespace std;

void printer(int a, int b)
{
  cout << a << " : " << b;
}

int main()
{
  int a, b;
  cout << "시와 분을 각각 입력하시오.: ";
  cin >> a >> b;

  printer(a , b);

  return 0;
}
