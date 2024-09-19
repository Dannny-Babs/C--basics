// roman to integer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char *s)
{
    int sum = 0;
    int length = strlen(s);
    for (int i = length - 1; i >= 0; i--)
    {
        if (s[i] == 'I')
        {
            sum += 1;
        }
        else if (s[i] == 'V')
        {
            sum += 5;
            if (i > 0 && s[i - 1] == 'I')
            {
                sum -= 1;
                i--; // Skip the 'I'
            }
        }
        else if (s[i] == 'X')
        {
            sum += 10;
            if (i > 0 && s[i - 1] == 'I')
            {
                sum -= 1;
                i--; // Skip the 'I'
            }
        }
        else if (s[i] == 'L')
        {
            sum += 50;
            if (i > 0 && s[i - 1] == 'X')
            {
                sum -= 10;
                i--; // Skip the 'X'
            }
        }
        else if (s[i] == 'C')
        {
            sum += 100;
            if (i > 0 && s[i - 1] == 'X')
            {
                sum -= 10;
                i--; // Skip the 'X'
            }
        }
        else if (s[i] == 'D')
        {
            sum += 500;
            if (i > 0 && s[i - 1] == 'C')
            {
                sum -= 100;
                i--; // Skip the 'C'
            }
        }
        else if (s[i] == 'M')
        {
            sum += 1000;
            if (i > 0 && s[i - 1] == 'C')
            {
                sum -= 100;
                i--; // Skip the 'C'
            }
        }
    }
    return sum;
}

int main()
{
    char s[] = "MCMXCXLIII";
    int result = romanToInt(s);
    printf("Result: %d\n", result);
    return 0;
}