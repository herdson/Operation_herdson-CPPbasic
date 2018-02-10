#include<iostream>

using namespace std;

void starlen()
{
  double light;
  double temp;
  cout << "광년 수를 입력하고 엔터를 누르십시오.: ";
  cin >>  light;

  temp = light *63240;

  cout << light << " 광년은 " << temp << " 천문 단위입니다." << endl;

}



int main()
{
  starlen();

  return 0;
}
