#include "main.h"
/**
 * _atoi - to check a to i
 * @s: the string
 * Return: Always 0
 */
int _atoi(char *s)
{
    int rslt = 0;
    int sgn = 1;

    if (*s == '-' || *s == '+') {
        sgn = (*s++ == '-') ? -1 : 1;
    }

    while (*s >= '0' && *s <= '9') {
        rslt = rslt * 10 + (*s++ - '0');
    }

    return (sgn * rslt);
}
