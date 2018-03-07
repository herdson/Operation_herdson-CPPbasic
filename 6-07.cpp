#include<iostream>

using namespace std;

const int MAX(10);

double * fill_array(double *ar, int limit)
{
    double tmp;
    int i;
    for(i = 0; i < limit; ++i)
    {
        cout << (i + 1) << " real estate value: $";
        cin >> tmp;
        if(cin.fail())
        {
            cin.clear();
            while(cin.get() != '\n')
            {
                continue;
            }
            cout << "Input error. End process.\n";
            break;
        }
        else if(tmp < 0) { break; }
        *(ar + i) = tmp;
    }
    return ar + i - 1;
}

void show_array(double *ar, double *n)
{
    double *pt;
    for(pt = ar; pt <= n; pt++)
    {
        cout << pt - ar + 1 << "\'s real estate: $";
        cout << *pt << "\n";
    }
}

void revalue(double r, double *ar, double *n)
{
    double *pt;
    for(pt = ar; pt <= n; ++pt) { *pt *= r; }
}


int main()
{
    double properties[MAX];

    double *size = fill_array(properties, MAX);
    show_array(properties, size);
    if(size)
    {
        cout << "Input revalue ratio: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
            {
                continue;
            }
            cout << "Input failed. Please put the value.: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "End program.\n";
    cin.get();
    cin.get();
    return 0;
}
