#include<iostream>

using namespace std;

int main()
{
  short counter;
  cin >> counter;

  for(int i = 1; i < counter + 1; ++i)
  {
    for(int j = 0; j < counter - i; ++j)
    {
      cout << ".";
    }
    for(int k = 0; k < i; ++k)
    {
      cout << "*";
    }
    cout << endl;

  }
}
