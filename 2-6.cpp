#include<iostream>

using namespace std;

int main()
{
  int mile;
  short gal;

  cout << "주행거리를 작성하시오.(마일): ";
  cin >> mile;
  cout << "사용한 기름 양을 작성하시오.(갤런): ";
  cin >> gal;

  float usresult(float(mile)/gal);

  cout << "계산된 연비는 다음과 같습니다. " << usresult << endl;

  int kmeter;
  short liter;

  cout << "주행거리를 작성하시오.(킬로미터): ";
  cin >> kmeter;
  cout << "사용한 기름 양을 작성하시오.(리터): ";
  cin >> liter;

  float euresult(float(liter)/kmeter*100);

  cout << "계산된 연비는 다음과 같습니다. " << euresult;
}
