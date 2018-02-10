#include<iostream>

using namespace std;


int main()
{
  const int day(86400);
  const int hour(3600);
  const int second(60);
  long seconds;
  cin >> seconds;
  int days(seconds/day);
  int hours(seconds%day/hour);
  int min(seconds%day%hour/second);
  int sec(seconds%day%hour%second);

  cout << days << " " << hours << " " << min << " " << sec << endl;

}
