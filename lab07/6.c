#include <stdio.h>

int charcount(char *s);
void charweave(char *s,char *result);

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}

int charcount(char *s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++);
    return i;
}

void charweave(char *s,char *result)
{
    int len = charcount(s);
    int i, j = len-1, k;

    for(i = k = 0; i < len; i++)
    {
        result[k++] = s[i];
        result[k++] = s[j--];
    }

    result[k] = '\0';
}