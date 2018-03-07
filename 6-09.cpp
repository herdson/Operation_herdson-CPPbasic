#include<iostream>
#include<cstring>

using namespace std;

const int SLEN(30);

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n)
{
    int i(0);
    while(i < n)
    {
        cout << "Write name\n";
        cin.get(pa[i].fullname, 30);
        if(cin.fail())
        {
            cout << "Input error. Please try again.\n";
            cin.clear();
            cin.ignore(10, '\n');
            continue;
        }
        else if(strcmp(pa[i].fullname, "\n") == 0)
        {
            cout << "Input end.\n";
            break;
        }
        cin.get();
        cout << "Write hobby\n";
        cin.get(pa[i].hobby, 30);
        cin.get();
        cout << "Write level\n";
        cin >> pa[i].ooplevel;
        cin.get();
        cin.clear();
        ++i;
    }
    return i;
}

void display(student st)
{
    cout << "Student\n";
    cout << st.fullname << "\n" << st.hobby << "\n" << st.ooplevel << "\n\n";
}

void display2(const student *ps)
{
    cout << "Ptr\n";
    cout << (*ps).fullname << "\n" << (*ps).hobby << "\n" << (*ps).ooplevel << "\n\n";
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << pa[i].fullname << "\n" << pa[i].hobby << "\n" << pa[i].ooplevel << "\n";
    }
}

int main()
{
    cout << "Input class student numbers: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n') {continue;}

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int k = 0; k < entered; ++k)
    {
        display(ptr_stu[k]);
        display2(&ptr_stu[k]);
    }
    display3(ptr_stu, entered);
    cout << "End program\n";
}
