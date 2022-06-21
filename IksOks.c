#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


void display(char space1, char space2, char space3, char space4, char space5, char space6, char space7, char space8, char space9, int turnNumbers, int i, bool won) {
    
    printf("       |        |\n   %c   |   %c    |   %c    \n_______|________|________\n", space1, space2, space3); // Renderer for the board
    printf("       |        |\n   %c   |   %c    |   %c    \n_______|________|________\n", space4, space5, space6);         
    printf("       |        |\n   %c   |   %c    |   %c    \n       |        |        \n", space7, space8, space9); 

}

void checkWin(char space1, char space2, char space3, char space4, char space5, char space6, char space7, char space8, char space9, int turnNumbers) {



}

int main () {
    char filler;
    bool won = false;
    char space1 = 178; 
    char space2 = 178;
    char space3 = 178;
    char space4 = 178;
    char space5 = 178;                  //sets the default shaded empty region
    char space6 = 178;
    char space7 = 178;
    char space8 = 178;
    char space9 = 178;
    int turnNumbers = 1; //the current turn number
    int sign; // first sign to play x or o
    int currentField; //current field to be used
    int i; //iterator
    char defaultValue = 178; //default value for comparing and finding an empty field

    printf("Would you like to be: \n");
    printf("1. X \n");
    printf("2. O \n");
    printf("Write the number of the answer in: ");
    scanf("%d", &sign);

    switch (sign) {

        case 1:
        printf("\nYou chose X!");
        turnNumbers = 1;
        break;

        case 2:
        printf("\nYou chose O!");
        turnNumbers = 2;
        break;

        default: 
        printf("\n You retarded as fuck");


    }

    for (i = 0; i <= 1; i++) {
    system("cls");
    display(space1, space2, space3, space4, space5, space6, space7, space8, space9, turnNumbers, i, won);
    if (won = false) {
    if (turnNumbers %2 != 0) {

        printf("X's turn! \n");
        printf("Say the space number of your field: ");
        scanf("%d", &currentField);

        switch (currentField) {

            case 1:
            if (space1 == defaultValue) {
            space1 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 2:
            if (space2 == defaultValue) {
            space2 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 3:
            if (space3 == defaultValue) {
            space3 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;
            
            case 4:
            if (space4 == defaultValue) {
            space4 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 5:
            if (space5 == defaultValue) {
            space5 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 6:
            if (space6 == defaultValue) {
            space6 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 7:
            if (space7 == defaultValue) {
            space7 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 8:
            if (space8 == defaultValue) {
            space8 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 9:
            if (space9 == defaultValue) {
            space9 = 88;
            turnNumbers = turnNumbers + 1;
            }
            break;
        }

    }

    else {
    printf("O's turn!");
    printf("\nSay the space number of your field: ");
    scanf("%d", &currentField);

     switch (currentField) {

            case 1:
            if (space1 == defaultValue) {
            space1 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 2:
             if (space2 == defaultValue) {
            space2 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 3:
             if (space3 == defaultValue) {
            space3 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;
            
            case 4:
             if (space4 == defaultValue) {
            space4 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 5:
             if (space5 == defaultValue) {
            space5 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 6:
             if (space6 == defaultValue) {
            space6 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 7:
             if (space7 == defaultValue) {
            space7 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 8:
             if (space8 == defaultValue) {
            space8 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;

            case 9:
             if (space9 == defaultValue) {
            space9 = 111;
            turnNumbers = turnNumbers + 1;
            }
            break;
        }      
    } 
    i = i - 1;
    }
    }
}