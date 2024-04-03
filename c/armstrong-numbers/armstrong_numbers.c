#include "armstrong_numbers.h"

int     get_digit_size(int digit)
{
    int size = 0;

    while (digit)
    {
        digit /= 10;
        size++;
    }
    return (size);
}

int     add_numbers(int n, int pow)
{
    int     res = n;

    while (pow - 1)
    {
        res *= n;
        pow--;
    }
    return (res);
}

bool is_armstrong_number(int candidate)
{
    int     power = get_digit_size(candidate);
    int     res = 0;
    int     temp = candidate;

    while (temp)
    {
        res += add_numbers(temp % 10, power);
        temp /= 10;
    }
    return (res == candidate ? 1 : 0);
}
