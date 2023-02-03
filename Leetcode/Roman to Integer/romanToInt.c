#include <stdio.h>

int getRomanInt(char c)
{
    int value;
    switch (c)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
    default:
        value = 0;
        break;
    }
    return value;
}

int romanToInt(char *s)
{
    int value, strLenght, j;

    char prev, next;

    int numPrev, numNext;

    value = strLenght = 0;

    while (s[strLenght] != '\0')
    {
        strLenght++;
    }

    for (int i = 0; i < strLenght; i++)
    {
        j = i + 1;

        prev = s[i];
        next = s[j];

        numPrev = getRomanInt(prev);
        numNext = getRomanInt(next);

        if (numPrev >= numNext)
        {
            value += numPrev;
        }
        else
        {
            value -= numPrev;
        }
    }

    return value;
}

int main(int argc, char const *argv[])
{
    char *s1 = "D";
    char *s2 = "LVIII";
    char *s3 = "MCMXCIV";

    printf("%d \n", romanToInt(s1));
    printf("%d \n", romanToInt(s2));
    printf("%d \n", romanToInt(s3));

    return 0;
}