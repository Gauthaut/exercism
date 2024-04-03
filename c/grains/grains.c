#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t res = 1;

    while (index - 1)
    {
        res *= 2;
        index--;
    }
    return (res);
}

uint64_t total(void)
{
    uint64_t i = 1;
    uint64_t res = 0;

    while (i < 65)
    {
        res += square(i);
        printf("case %llu = %llu grains\n", i, res);
        i++;
    }
    printf("total = %llu\n", res);
    return (res);
}

// int main (void)
// {
//     total();
//     return (0);
// }
