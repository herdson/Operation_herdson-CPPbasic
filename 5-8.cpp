#include<fstream>
#include<iostream>

using namespace std;

const int SIZE(15);

int main()
{
    ifstream textreader;

    char finame[SIZE];

    cin >> finame;

    textreader.open(finame);

    char txt;
    int counter(0);

    textreader >> txt;
    while(textreader.good())
    {
        if(txt != ' ')
            ++counter;
        textreader >> txt;
    }
    if(textreader.eof())
    {
        cout << "File ended\n"
        << counter << " characters counted.\n";
    }
    else
    {
        cout << "Error detected";
        exit(EXIT_FAILURE);
    }

}
