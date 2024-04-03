#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    int     i = 0;
    int     res = 0;

    if (!lhs || !rhs || strlen(lhs) != strlen(rhs))
        return (-1);
    while (lhs[i])
    {
        if (lhs[i] != rhs[i])
            res++;
        i++;
    }
    return (res);
}
