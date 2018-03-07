#include<iostream>

using namespace std;

long double probability()
{
    long double firstresult(1.0);
    long double secondresult(1.0);
    long double n;
    unsigned p;

    for(n = 47, p = 5; p > 0; --n, --p)
    {
        firstresult = firstresult * n / p;
    }

    n = 27;
    p = 1;
    secondresult = secondresult * n / p;


    return firstresult * secondresult;
}

int main()
{
    cout << "당신이 이길 확률은 ";
    cout << probability();
    cout << "번 중에서 한 번입니다.\n";
    cout << "프로그램을 종료합니다.";
    return 0;
}
