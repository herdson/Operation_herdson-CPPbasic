#include<string>
#include<iostream>

using namespace std;

int main()
{
  string lis[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

  int soldlist[3][12] = {};
  int monsell;
  int totalsell(0);

  for(int i = 0; i < 3; ++i)
  {
    int yearsell(0);

    cout << "Year " << i+1 << "\n";
    for(int j = 0; j < 12; ++j)
    {
      cout << "Input " << lis[j] << " profit: ";
      cin >> monsell;
      soldlist[i][j] = monsell;
      yearsell += monsell;
    }
    cout << "Year " << i+1 << " profit: " << yearsell << "\n";
    totalsell += yearsell;

  }
cout << "Total profit: " << totalsell << "\n";
}
