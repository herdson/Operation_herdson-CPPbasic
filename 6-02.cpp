#include<iostream>

void saver(int *arr)
{
    int tp;
    for(int i = 0; i < 10; ++i)
    {
        std::cout << "Put in the score (" << 10 - i << "left)" << '\n';
        std::cin >> tp;
        if(tp >= 0) {*(arr + i) = tp;}
        else {break;}
    }
}

void printer(int *arr)
{
    int tmp(0);
    while(*(arr + tmp))
    {
        std::cout << *(arr + tmp) << '\n';
        ++tmp;
    }
}

int golf(int arr[])
{
    int total(0);
    int temp;
    for(temp = 0; temp < 10; ++temp)
    {
        if(arr[temp]) {total += arr[temp];}
        else {break;}
    }
    return total / temp;
}

int main()
{
    int tester[10] = {};

    printer(tester);
    saver(tester);
    std::cout << golf(tester) << "\n";
}
