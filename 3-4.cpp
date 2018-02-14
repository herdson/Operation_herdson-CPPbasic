#include<string>
#include<iostream>

using namespace std;

int main()
{
  cout << "Write your first name: ";
  string first_name;
  getline(cin, first_name);
  cout << "Write your last name: ";
  string last_name;
  getline(cin, last_name);

  string full(last_name + ", " + first_name);

  cout << full;
}
