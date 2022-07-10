#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void display(char space1, char space2, char space3, char space4, char space5, char space6, char space7, char space8, char space9, int turnNumbers, bool won) {
    printf("       |        |\n   %c   |   %c    |   %c    \n_______|________|________\n", space1, space2, space3); // Renderer for the board
    printf("       |        |\n   %c   |   %c    |   %c    \n_______|________|________\n", space4, space5, space6);         
    printf("       |        |\n   %c   |   %c    |   %c    \n       |        |        \n", space7, space8, space9); 
}

bool checkWin(char space1, char space2, char space3, char space4, char space5, char space6, char space7, char space8, char space9, bool won, int turnNumbers) {
    
    if (space1 != -78) {
        if (space1 == space4 && space4 == space7) {
            won = true;
        }
    }

    if (space2 != -78) {
        if (space2 == space5 && space5 == space8) {
            won = true;
        }
    }

    if (space3 != -78) {
        if (space3 == space6 && space6 == space9) {
            won = true;
        }
    }

    if (space1 != -78) {
        if (space1 == space2 && space2 == space3) {
            won = true;
        }
    }

    if (space4 != -78) {
        if (space4 == space5 && space5 == space6) {
            won = true;
        }
    }

    if (space7 != -78) {
        if (space7 == space8 && space8 == space9) {
            won = true;
        }
    }

    if (space1 != -78) {
        if (space1 == space5 && space5 == space9) {
            won = true;
        }
    }

    if (space3 != -78) {
        if (space3 == space5 && space5 == space7) {
            won = true;
        }
    }

    if (won == true) {
        if (turnNumbers %2 == 0) {
            printf("O won! \n");
        }
        else printf("X won! \n");
    }
    return won;
}


int main () {
    char filler;
    bool won = false;
    char space1 = 178; 
    char space2 = 178;
    char space3 = 178;
    char space4 = 178;
    char space5 = 178;//sets the default shaded empty region
    char space6 = 178;
    char space7 = 178;
    char space8 = 178;
    char space9 = 178; //among us among us among us
    int turnNumbers = 1; //the current turn number
    int sign; // first sign to play x or o
    int currentField; //current field to be used
    char defaultValue = 178; //default value for comparing and finding an empty field

    
    
    bool correct = false;
    while(!correct){
    printf("Would you like to be: \n");
    printf("1. X \n");
    printf("2. O \n");
    printf("Write the number of the answer in: ");
    scanf("%d", &sign);
    switch (sign) {

        case 1:
        printf("You chose X!");
        turnNumbers = 1;
        correct = true;
        break;

        case 2:
        printf("You chose O!");
        turnNumbers = 2;
        correct = true;
        break;

        default: 
        printf("You retarded as fuck");
        break;


    }
    if(correct)
    break;
    }
    while (won == false) {
    system("cls");
    display(space1, space2, space3, space4, space5, space6, space7, space8, space9, turnNumbers, won);
    won = checkWin(space1, space2, space3, space4, space5, space6, space7, space8, space9, won, turnNumbers);
    if (turnNumbers %2 != 0 && won == false) {
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

    else if (turnNumbers % 2 == 0 && won == false){
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
    }
}