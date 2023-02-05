#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

// char *longestCommonPrefix(char **strs, int strsSize)
// {
//     char *prefix = malloc(sizeof(char *));

//     int wordi = 0;
//     int letteri = 0;

//     while ((strs[wordi][letteri] != '\0') || (wordi < strsSize - 1))
//     {
//         char letter1 = strs[wordi][letteri];
//         char letter2 = strs[wordi + 1][letteri];

//         if ((wordi == (strsSize - 1)) && (letter1 == letter2))
//         {
//             prefix[letteri] = letter1;
//             letteri++;
//         }

//         if ((letter1 != letter2))
//         {
//             break;
//         }
//         else
//         {
//             wordi++;
//         }
//     }

//     return prefix;
// }

int min(int a, int b)
{
    return (a < b) ? a : b;
}

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";
    if (strsSize == 1)
        return strs[0];

    int prefixLength = INT_MAX;
    for (int i = 0; i < strsSize; i++)
    {
        int len = strlen(strs[i]);
        prefixLength = min(prefixLength, len);
    }

    char *prefix = malloc((prefixLength + 1) * sizeof(char));
    memset(prefix, 0, prefixLength + 1);

    for (int i = 0; i < prefixLength; i++)
    {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != c)
            {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = c;
    }

    return prefix;
}

int main(int argc, char const *argv[])
{
    char **strs = malloc(sizeof(char **));

    strs[0] = "flower";

    strs[1] = "flow";

    strs[2] = "flight";

    char *prefix = longestCommonPrefix(strs, 3);

    printf("%s", prefix);

    return 0;
}
