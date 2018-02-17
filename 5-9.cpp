#include<fstream>
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
    map<string, double> superer;
    map<string, double>::iterator s;
    map<string, double> noober;
    map<string, double>::iterator n;

    ifstream reader;
    string fname;

    cin >> fname;

    reader.open(fname);

    if(!reader.is_open())
    {
        cout << "Error occured.\n";
        exit(EXIT_FAILURE);
    }
    int counter;
    reader >> counter;

    Tracking* users = new Tracking[counter];

    for(int i = 0; i < counter; ++i)
    {
        reader.ignore(20, '\n');
        getline(reader, (users + i)->name);
        reader >> (users + i)->funding;

        if ((users + i)->funding > 10000)
        {
            superer.insert(pair<string, double>((users + i)->name, (users + i)->funding));
        }
        else {noober.insert(pair<string, double>((users + i)->name, (users + i)->funding));}
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
