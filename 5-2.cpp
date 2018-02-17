#include<array>
#include<iostream>

using namespace std;

int main()
{
    array<double, 10> funder;
    double total(0);
    double avg;
    double temp;

    for(int i = 0; i < (int)funder.size(); ++i)
    {
        cout << "Write funing money(" << funder.size() - i << "left): ";
        temp = 0;
        cin >> temp;
        if(!cin.fail())
        {
            funder[i] = temp;
            cin.ignore(30, '\n');
            cin.clear();
            total += funder[i];
        }
        else {exit(EXIT_FAILURE);}

    }
    avg = total/10;
    int counter(0);
    for(int j = 0; j < (int)funder.size(); ++j)
    {
        if(avg > funder[j]) {++counter;}
    }

    cout << "Average fund: " << avg << "\n";
    cout << "Over the average: " << counter;


}
