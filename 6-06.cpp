#include<iostream>

using namespace std;

const int arrsize(15);

int Fill_array(double ar[], int size)
{
    int count;
    for(count = 0; count < size; ++count)
    {
        cout << "Input the value: ";
        cin >> ar[count];
        if(cin.fail()) {break;}
    }
    return count;
}

void Show_array(double *ar, int elements)
{
    for(int i = 0; i < elements; ++i)
        cout << *(ar + i) << "\n";
}

void Reverse_array(double *ar, int elements)
{
    int length(elements / 2);
    double temp;
    for(int j = 0; j < length; ++j)
    {
        if(j == 0) {continue;}
        temp = *(ar + j);
        *(ar + j) = *(ar + elements - 1 - j);
        *(ar + elements - 1 - j) = temp;
    }

}

int main()
{
    double tst[arrsize];
    int counted = Fill_array(tst, arrsize);
    cout << counted << "\n\n";
    Show_array(tst, counted);
    Reverse_array(tst, counted);
    cout << "\n";
    Show_array(tst, counted);
}
