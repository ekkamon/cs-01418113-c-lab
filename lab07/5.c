#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char *str);

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}

char *stoupper(const char *str)
{
    char *newStr = (char *)malloc(255 * sizeof(char));

    for(int i = 0; str[i] != '\0'; i++)
        newStr[i] = toupper(str[i]);

    return newStr;
}