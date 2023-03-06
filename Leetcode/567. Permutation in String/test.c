#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool checkSubString(char *string, char *subString)
{
    int stringLen = 0;
    while (string[stringLen] != "\0")
    {
        stringLen++;
    }

    int subStringLen = 0;
    while (subString[subStringLen] != "\0")
    {
        subStringLen++;
    }

    int i = 0;
    int j = subStringLen;

    while (j < stringLen)
    {
        for (int k; k < subStringLen; k++)
        {
            if (subString[k] == string[i])
            {
                i++;
            }
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    char *string = "abcdef";
    char *subString = "cd";

    bool result;

    result = checkSubString(string, subString);

    printf("%s\n", string);
    printf("%s\n", subString);
    printf("%d\n", result);

    return 0;
}