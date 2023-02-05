int romanToInt(char *s)
{
    char letters[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int weight[7] = {1, 5, 10, 50, 100, 500, 1000};
    int table[89] = {0};
    int value = 0;

    for (int i = 0; i < 7; i++)
    {
        table[letters[i]] = weight[i];
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (table[s[i]] >= table[s[i + 1]])
        {
            value += table[s[i]];
        }
        else
        {
            value -= table[s[i]];
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