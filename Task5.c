/* Task 5: File Copy

Description: Write a program that copies the 
contents of one file to another. 
Prompt the user to input the names of the source and destination files.
Read the contents of the source file and write them to the destination file.

*/


#include <stdio.h>
#include <stdlib.h> // using this for exit() function

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;  
    char ch, filename[50];
    printf("Enter the name of the source file with extension: "); // using fp1.txt as source file
    scanf("%s", filename);

    fp1 = fopen(filename, "r");
    if (fp1 == NULL)
    {
        printf("Unable to open the source file.\n");
        exit(1);
    }
    printf("Enter the name of the destination file with extension: ");  // using fp2.txt (or use your own name) as destination file
    scanf("%s", filename);

    fp2 = fopen(filename, "w");
    if (fp2 == NULL)
    {
        printf("Unable to create the destination file.\n");
        fclose(fp1);
        exit(1);
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");  
    fclose(fp1);
    fclose(fp2);

    return 0;
}
