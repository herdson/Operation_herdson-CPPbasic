#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  short counter(0);
  char wd[15];
  cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력합니다).: \n";
  do
  {
    cin >> wd;
    counter++;
  }
  while (strcmp(wd, "done"));

  cout << counter-1;

}
