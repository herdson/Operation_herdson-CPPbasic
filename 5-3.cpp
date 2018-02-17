#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    char inp;
    cout << "Type alphabet c, p, t or g(q for close): \n";
    cout << "c) camera\tp) pianist\n" <<
    "t) tree\t)g game\n";

    cin >> inp;

    inp = tolower(inp);

    while(inp != 'q')
  {
    cin.ignore(10, '\n');
    switch (int(inp))
    {
        case int('c'):
          cout << "A camera is watching you.\n";
          break;
        case int('p'):
          cout << "A pianist is playing the piano.\n";
          break;
        case int('t'):
          cout << "Tree was cut.\n";
          break;
        case int('g'):
          cout << "Do you like game?\n";
          break;
        default:
          cout << "Not in the list. Type again.\n";
    }
    cin >> inp;
    inp = tolower(inp);
  }
  
}
