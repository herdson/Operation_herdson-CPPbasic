#include<cctype>
#include<iostream>

using namespace std;

int main()
{
    char outer;
    do {
        cin.get(outer);
        if(isdigit(outer)) {continue;}
        else
        {
            if(isupper(outer)) {cout << (char)tolower(outer);}
            else if (islower(outer)) {cout << (char)toupper(outer);}
            else {cout << outer;}
        }
    } while(outer != '@');
}
