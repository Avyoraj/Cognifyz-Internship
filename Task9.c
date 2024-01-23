/*Task 9: Rock-Paper-Scissors
Game Description: Implement a simple rock-paper-scissors game. 
Prompt the user to choose either rock, paper, or scissors,
and generate a random choice for the computer. 
Determine the winner based on the game rules and display the result. */



#include <stdio.h>
#include <stdlib.h> // provides rand() and srand()[seeding values to rand] functions for generating random numbers
#include <time.h>  // provides time() function  for seeding the random number generator

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Prompt the user for their choice
    printf(" Choose:\n rock (0):\n paper (1):\n scissors (2):\n ");
    printf("Enter your choice: ");
    int user;
    scanf("%d", &user);

    // Generate a random choice for the computer
    int comp = rand() % 3;

    // Determine the winner based on the game rules
    if (user == comp) {
        printf("All even, no winner in sight! (Tie)\n");
    }
    
    else if (
        (user == 0 && comp == 2) ||  // rock beats scissors
        (user == 1 && comp == 0) ||  // paper beats rock
        (user == 2 && comp == 1)  )  // scissors beats paper
    
    {
        printf("Claimed the win, you deserve it!\n");
    } 
    
    else
    {
        printf("The algorithm wins, and the computer is crowned victorious!\n");
    }

    return 0;
}
