#include <stdio.h>

void roman2arabic(char input[],char output[]);

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}

void roman2arabic(char input[],char output[])
{
   int i, j;
   for(j = i = 0; input[i] != '\0'; i++, j++)
   {
      output[j] = input[i];

      if (input[i] == 'I')
      {
         switch (input[i+1])
         {
            case 'V':
               i++;
               output[j] = '0' + 4;
               break;
            case 'X':
               i++;
               output[j] = '0' + 9;
               break;
            case 'I':
               if (input[i+2] == 'I')
               {
                  i += 2;
                  output[j] = '0' + 3;
               }
               else
               {
                  i++;
                  output[j] = '0' + 2;
               }
               break;
            default:
               output[j] = '0' + 1;
         }
      }
      else if(input[i] == 'V')
      {
         if (input[i+1] != 'I')
         {
            output[j] = '0' + 5;
            continue;
         }

         if(input[i+2] == 'I' && input[i+3] == 'I')
         {
            i += 3;
            output[j] = '0' + 8;
         }
         else if (input[i+2] == 'I')
         {
            i += 2;
            output[j] = '0' + 7;
         }
         else
         {
            i++;
            output[j] = '0' + 6;
         }
      }
   }

   output[j] = '\0';
}