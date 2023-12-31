#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 * @s1: first string to compare
 * @s2: second string to compare; can contain the special character *
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0')
    {
        return (*s1 == '\0');
    }
    if (*s2 == '*')
    {
        if (wildcmp(s1, s2 + 1))
        {
            return (1);
        }
        if (*s1 != '\0' && wildcmp(s1 + 1, s2))
        {
            return (1);
        }
    }
    if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    return (0);
}

