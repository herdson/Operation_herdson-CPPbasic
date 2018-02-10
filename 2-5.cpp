#include<iostream>

using namespace std;

int main()
{
  long long universe;
  long long country;

  cout << "현재 세계 인구 수를 입력하시오.: ";
  cin >> universe;
  cout << "특정 국가의 인구 수를 입력하시오.: ";
  cin >> country;

  long double result((long double)country/universe*100);

  cout << "세계 인구 대비 비율은 " <<  result << "% 입니다.\n";
}
