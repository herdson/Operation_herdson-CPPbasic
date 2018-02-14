#include<string>
#include<iostream>

using namespace std;

int main()
{
  string first_name;
  string last_name;
  char wanna;

  cout << "Write down your first name: ";
  getline(cin, first_name);
  cout << "Write down your last name: ";
  getline(cin, last_name);
  cout << "input the score that you want: ";
  cin.get(wanna).get();

  cout << "Your name is " << first_name << " "
  << last_name << "\n";
  cout << "Your score is " << char(wanna+1);


}
