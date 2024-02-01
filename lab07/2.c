#include <stdio.h>

int remove_vowel(char *str)
{
    int i, j;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for(i = 0; str[i] != '\0'; i++)
    {
        int ch = str[i];
        for(j = 0; j < 5; j++)
        {
            if (ch == vowels[j] || ch == (vowels[j] - 32))
            {
                int k, l;
                for(k = l = i; str[k] != '\0'; k++)
                    str[k] = str[++l];
                i--;
            }
        }
    }

    str[i] = '\0';

    return 0;
}

int main()
{ 
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}