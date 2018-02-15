#include<iostream>

using namespace std;

const short mx(100);

int main()
{
  long double kos[mx];

  kos[0] = kos[1] = 1;

  for(int i(2); i<mx; ++i)
  {
    kos[i] = i*kos[i-1];
  }

  cout << kos[99];

}
