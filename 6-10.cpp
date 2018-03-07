#include <iostream>

using namespace std;

double calculate(double x, double y, double (*func)(double , double))
{
    return func(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    if(x > y)
    {
        return x - y;
    }
    else
    {
        return y - x;
    }
}

double dividor(double x, double y)
{
    return x/y;
}

double multiple(double x, double y)
{
    return x * y;
}
int main()
{
    double x(20.2);
    double y(10.3);
    cout << calculate(x, y, subtract) << "\n";
    cout << calculate(x, y, add) << "\n";
    cout << calculate(x, y, dividor) << "\n";
    double (*pf[3])(double, double) = {add, add, multiple};
    for(int i = 0; i < 3; ++i)
    {
        cout << pf[i](x, y) << "\n";
    }

}
