#include<cstring>
#include<iostream>

using namespace std;
const short size(80);

int main()
{
  char first_name[size], last_name[size];

  cout << "Type your first name: ";
  cin.getline(first_name, size);
  cout << "Type your last name: ";
  cin.getline(last_name, size);

  strcat(last_name, ", ");
  strcat(last_name, first_name);

  cout << last_name;

}
