#include<iostream>

double calcer(double a, double b)
{
    if(a && b)
    {
        return 2.0 * a * b / (a + b);
    }
    else
    {
        return 0;
    }
}

int main()
{
    double a, b;
    std::cin >> a >> b;

    while(a && b)
    {
        std::cout << calcer(a, b) << "\n";
        std::cin >> a >> b;
    }
    std::cout << "Process end." << '\n';
}
