#include <stdio.h>

int main()
{
    char str[255];
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", str);

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; str[i] != '\0'; i++)
    {
        int ch = str[i];

        for(int j = 0; j < 5; j++)
        {
            if (ch == vowels[j] || ch == (vowels[j] - 32))
            {
                printf("%c ", ch);
                count++;
            }
        }
    }

    puts("");
    printf("This string contains %d vowel%s.", count, count > 1 ? "s" : "");
}