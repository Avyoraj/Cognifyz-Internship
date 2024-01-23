/*Task 8: Array Sorting
Description:Write a program that sorts an array of integers
in ascending or descending order. 
Prompt the user to input the array elements and choose the sorting order.
Display the sorted array. 
*/


#include <stdio.h>

void bsort(int arr[], int n) // Bubble sort function
{
    int i, j, temp;

    for (i = 0; i < n-1; i++) // Outer loop for number of passes (n-1)
    {
        for (j = 0; j < n-i-1; j++) /*Inner loop for comparison in each pass (n-i-1)
         to avoid unnecessary comparisons..*/
         {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
 {
    int arr[100], n, i, choice;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Choose the sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);
    
    bsort(arr, n);
    
    printf("Sorted array: ");
    if (choice == 1) {
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else if (choice == 2) {
        for (i = n-1; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid choice!");
    }
    
    return 0;
}
