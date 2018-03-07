#include<iostream>

using namespace std;

const int seasons(4);
const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

void fill(const char *ar[4], double *da);
void show(const char *ar[4], double *da);

int main()
{
    double aexpenses[4];

    fill(Snames, aexpenses);
    show(Snames, aexpenses);
    cout << sizeof aexpenses;
}

void show(const char *ar[4], double *da)
{
    double total(0.0);
    cout << "Cost per season\n";
    for(int j = 0; j < seasons; ++j)
    {
        cout << Snames[j] << " : $" << da[j] << "\n";
        total += da[j];
    }
    cout << "Total cost : " << total << "$\n";
}

void fill(const char *ar[4], double *da)
{
    for(int i = 0; i < seasons; ++i)
    {
        cout << "Cost to " << Snames[i] << "\n";
        cin >> da[i];
    }
}
