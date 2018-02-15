#include<string>
#include<iostream>

using namespace std;

int main()
{
  string wd;
  short count(0);
  do {
    cin >> wd;
    count++;
  } while(wd != "done");

  cout << count-1;
}
