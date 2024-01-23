/*Task 6: Palindrome Checker
Description: Write a program that checks whether a given word or phrase is a palindrome.
A palindrome is a word or phrase that reads the same forwards and backwards.
Prompt the user to input a word orphrase and display whether it is a palindrome or not.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> // used for tolower() function for case-insensitive comparison


// Function to check if a given string is a palindrome (case-insensitive)
int isPalindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        // Convert characters to lowercase before comparing
        if (tolower(str[i]) != tolower(str[j]))
        {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin); 
    /* fgets is used to prevent buffer overflow
    (or it stops the user from inputting 
    more than the size of the array)*/

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
