#include<iostream>

using namespace std;

const double minparse(60);
const double secparse(60*60);

int main()
{
  int a, b, c;
  cout << "위도를 도, 분, 초 단위로 입력하시오.: ";
  cin >> a >> b >> c;

  double total(a+b/minparse+c/secparse);

  cout << total;
}
