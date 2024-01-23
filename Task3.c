/* Task 3: Fibonacci Series 

Description: Implement a program that generates the Fibonacci series
up to a givennumber of terms.
Prompt the user toenter the number of terms 
and display the series. */


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1=0,n2=1,s,terms; 
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    printf("fibonaci series:%d,%d",n1,n2);  // fibonaci series starts with 0,1
    for (int i = 2; i < terms; ++i)
    {   s=n1+n2;
        n1=n2;
        n2=s;
        printf(",%d",s);
    }

    return 0;
}



