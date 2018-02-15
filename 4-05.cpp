#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  string lis[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
  int selling;
  vector<int> sold;

  for(int i = 0; i < 12; ++i)
  {
    cout << "Input " << lis[i] << " profit\n";
    cin >> selling;
    sold.push_back(selling);
  }

  unsigned int total(0);

  for(int j = 0; j < (int)sold.size(); ++j)
  {
    total += sold[j];
  }

  cout << "Total profit: " << total;

}
