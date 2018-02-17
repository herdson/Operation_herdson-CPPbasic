#include<iostream>

using namespace std;

const int strsize(50);

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    bop users[3] = {
        {"Anna Kosnova", "Silver", "EMP", 2},
        {"Mason Andrew", "Gold", "Mike", 0},
        {"Joe SeungHyun", "Grand master", "ainta", 1}
    };

    cout << "Choose the menu you want\n"
    << "a) Real name\tb) Title\n"
    << "c) BOP ID\td) User setting\n"
    << "q) Quit\n";

    char menu;
    cin >> menu;
    
    while(menu != 'q')
    {
        cin.ignore(10,'\n');

        switch (int(menu))
        {
            case int('a'):
              for(int i = 0; i < 3; ++i)
              {
                  cout << users[i].fullname << "\n";
              }
              break;
            case int('b'):
              for(int j = 0; j < 3; ++j)
              {
                  cout << users[j].title << "\n";
              }
              break;
            case int('c'):
              for(int k = 0; k < 3; ++k)
              {
                  cout << users[k].bopname << "\n";
              }
              break;
            case int('d'):
              for(int n = 0; n < 3; ++n)
              {
                  if (users[n].preference == 0) {cout << users[n].fullname << "\n";}
                  else if (users[n].preference == 1)
                  {
                      cout << users[n].title << "\n";
                  }
                  else {cout << users[n].bopname << "\n";}
              }
              break;
        }
        cin >> menu;
    }



}
