#include<iostream>

using namespace std;

int main()
{
  long A(100000);
  long B(100000);
  int counter(0);
  const long AM(A);

  do {
    A += AM*(0.1);
    B += B*(0.05);
    ++counter;
  } while(A>B);

  cout << counter;
}
