#include "isogram.h"

int is_the_same_letter(char a, char b)
{
    if (b == ' ' || b == '-')
        return (0);
    if (a == b)
        return (1);
    if (a >= 97)
        return (a == b + 32 ? 1 : 0);
    return (a == b - 32 ? 1 : 0);
}

bool is_isogram(const char phrase[])
{
    int i = 0;
    int j;

    if (!phrase)
        return (0);
    while (phrase[i])
    {
        while (phrase[i] == ' ' || phrase[i] == '-')
            i++;
        j = i + 1;
        while (phrase[j])
        {
            if (is_the_same_letter(phrase[i], phrase[j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}
