#include<iostream>

using namespace std;

int tax(int a)
{
    double totaltax(0);

    if(a > 35000)
    {
        totaltax += 4000;
        a = a - 35000;
        totaltax += a*0.2;
        return totaltax;
    }
    else if (a < 35000 && a > 15000)
    {
        totaltax += 1000;
        totaltax += (a-15000)*0.15;
        return totaltax;
    }
    else if (a < 15000 && a > 5000)
    {
        totaltax += (a-5000)*0.1;
        return totaltax;
    }
    else {return totaltax;}
}

int main()
{
    int income;
    cout << "Input your income: ";
    cin >> income;
    if(cin.fail() || income < 0)
    {
        cout << "Program will close\n";
        exit(EXIT_FAILURE);
    }
    else {cout << tax(income);}
}
