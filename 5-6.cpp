#include<string>
#include<map>
#include<iostream>

using namespace std;

struct Tracking
{
    string name;
    double funding;
};

int main()
{
    int counter;
    map<string, double> superer;
    map<string, double>::iterator s;
    map<string, double> noober;
    map<string, double>::iterator n;
    
    cout << "How many funders?: ";
    cin >> counter;

    Tracking* funderer = new Tracking[counter];

    for(int i = 0; i < counter; ++i)
    {
        cout << "funder info " << i+1 << "\n";
        cout << "Tell me your name: ";
        cin.ignore(20, '\n');
        getline(cin, (funderer+i)->name);
        cout << "Tell me your funding money: ";
        cin >> (funderer+i)->funding;
        if ((funderer+i)->funding > 10000)
        {
            superer.insert(map<string, double>::value_type((funderer+i)->name, (funderer+i)->funding));
        }
        else {noober.insert(pair<string, double>((funderer+i)->name, (funderer+i)->funding));}
    }

    if (counter > 0)
    {
        cout << "SUPER FUNDER\n";
        for(s = superer.begin(); s != superer.end(); ++s)
        {
            cout << s->first << " " << s->second << "\n";
        }
        cout << "NORMAL FUNDER\n";
        for(n = noober.begin(); n != noober.end(); ++n)
        {
            cout << n->first << " " << n->second << "\n";
        }

    }

}
