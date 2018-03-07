#include<iostream>

int factorial(int n)
{
    int total(1);
    if(n <= 0) {return 1;}
    for(int i = 1; i < n + 1; ++i)
    {
        total *= i;
    }
    return total;

}

int main()
{
    std::cout << factorial(5) << " " << factorial(-9);
}
