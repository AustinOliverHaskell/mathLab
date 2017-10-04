#include <iostream>

void power(int base, int exp);

int main()
{
    power(2,3);
}

void power(int base, int exp)
{
    int sum = base;

    for (int i = 0; i < exp - 1; i++)
    {
        sum *= base;
    }

    cout << sum << endl;
}