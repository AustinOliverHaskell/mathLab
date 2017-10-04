#include <iostream>

void power(int base, int exp);

int main()
{
    return 0;
}

void square(int base, int exp)
{
    int sum = base;

    for (int i = 0; i < exp; i++)
    {
        sum *= base;
    }
}