#include<cctype>
#include<iostream>

using namespace std;

int main()
{
    char txt[24];
    int vowel(0);
    int consonant(0);
    int other(0);

    cin >> txt;

    while(txt[0] != 'q')
    {
        txt[0] = (char)tolower(txt[0]);
        if (txt[0] == 'a' || 'e' || 'o' || 'u' || 'i') {++vowel;}
        else if(isalpha(txt[0])) {++consonant;}
        else {++other;}
        cin.clear();
        cin >> txt;
    }

    cout << "Vowels " << vowel << " counted\n";
    cout << consonant << " Consonats counted\n";
    cout << "Another string counted: " << other << "\n";
}
