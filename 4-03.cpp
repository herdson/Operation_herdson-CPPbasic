#include<iostream>

using namespace std;

int main()
{
  int inputer;
  long summer(0);
  do
  {

    cout << "Input: ";
    cin >> inputer;
    summer += inputer;

  }while(inputer);

  cout << endl << summer;

}
