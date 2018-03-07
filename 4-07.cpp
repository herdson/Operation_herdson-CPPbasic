#include<cstring>
#include<iostream>

using namespace std;

struct Car
{
  char brand[20];
  int made;
};
int main()
{
  int target;
  cout << "몇 대의 차를 목록으로 관리하시겠습니끼?: ";
  cin >> target;
  cin.get();

  Car* manager = new Car[target];

  for(int i = 0; i < target; ++i)
  {
    cout << "자동차 #" << i+1 << endl;
    cout << "제작업체: ";
    cin.getline((manager+i)->brand, 20);
    cout << endl << "제작년도: ";
    cin >> (*(manager+i)).made;
    cin.get();
  }

  for(int j = 0; j < target; ++j)
  {
    cout << (manager+j)->made << "년형 " << (manager+j)->brand << endl;
  }
  delete manager;
}
