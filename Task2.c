/*Task 2: Calculator Program

Description: Write a program that takes two
numbers and an operator as input(+, -, *, /, %)
and performs the
corresponding arithmetic operation.
Display the result on the console.
*/

#include <stdio.h>

int main()
{
double n1, n2, answer; // double is used for precision
char choice;

printf("Enter the first number: ");
scanf("%lf", &n1);       // %lf is used for double ( its LETTER L NOT 1)

printf("Enter the operator (+, -, *, /, %%): ");
scanf(" %c", &choice);

printf("Enter the second number: ");
scanf("%lf", &n2);

switch (choice)
 {      // switch case is used for multiple conditions
    case '+':
        answer = n1 + n2;
        break;

    case '-':
        answer = n1 - n2;
        break;

    case '*':
        answer = n1 * n2;
        break;

    case '/':
        if (n2 != 0)
        {
        answer = n1 / n2;
        } 
        
        else 
        {
        printf("Error: Division by zero not possible\n");
        return 1;
        }
        break;

    case '%':
        if (n2 != 0) 
        {
        answer = (int)n1 % (int)n2;
        }
        else 
        {
        printf("Error: Division by zero not possible\n");
        return 1;
        }
        break;

        default:
            printf("Error: Invalid Operator\n");
            return 1;
    }

    printf("Answer: %.2lf\n", answer); //It will print the answer with 2 decimal places

    return 0;
}
