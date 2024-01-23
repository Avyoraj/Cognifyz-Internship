/*Task 1: String Reversal
Description: Write a program that takes a string 
as input and reverses it. Display the reversed string on the console. */

#include <stdio.h>
#include <string.h>

void revstr(char* str)
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[100]; // 100 is the maximum size of the string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); /* fgets is used to prevent buffer overflow
                                    (or it stops the user from inputting 
                                     more than the size of the array)*/

  
 for (int i = 0; i < sizeof(str); i++) // Remove newline character from fgets
 { 
    if (str[i] == '\n')
    {
        str[i] = '\0';
        break;
    }
 } 

revstr(str);

printf("Reversed string: %s\n", str);

return 0;

}
