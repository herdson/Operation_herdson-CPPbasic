#include<string>
#include<iostream>

using namespace std;

int main()
{
  string name, dessert;

  cout << "Input your name to here: ";
  getline(cin, name);
  cout << "Plz write your favorite dessert to here: ";
  getline(cin, dessert);

  cout << "Ok " << name << ". I will offer " << dessert << "\n";
}
