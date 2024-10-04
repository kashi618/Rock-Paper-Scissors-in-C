#include <stdio.h>

// randomizing numbers
#include <stdlib.h>
#include <time.h>



// Horizontal Line, used to separate menus
void lineBreak() {
    printf("\n\n--------------------------------------------\n\n");
}


// Shows welcome screen
void startUp() {
    lineBreak();
    printf("Welcome to Kashi's Rock Paper Scissors Game!");
    lineBreak();
}



void startGame() {
    int ranNum;
    char playerChoice;
    char compChoice;
    char* listOptions[3] = {'r','p','s'};



    // Gets user choice
    while (1) {
        printf("Select an option below:\n");
        printf("(R)ock\n(P)aper\n(S)cissors\n\n")+1;
        scanf(" %c", playerChoice);

    }

    // Gets computer choice
    ranNum = rand() % 3; // Random number 0-2
    compChoice = listOptions[ranNum];
    printf("%c",compChoice);

    // Gets computer choice
    ranNum = rand() % 3; // Random number 0-2
    compChoice = listOptions[ranNum];
    printf("%c",compChoice);

}



void highscores() {
    lineBreak();

    printf("highscores");



}



void exitGame() {
    lineBreak();

    printf("exitGame");

}



// Menu consisting of (start game), (highscores), and (Exit)
void mainMenu() {
    // This variable stores the user's choice
    char gameOption;
    
    // This keeps on looping, until the user enters s, h, e
    while (1) {

        // Lets the user select a menu options
        printf("(S)tart game\n(H)ighscores\n(E)xit\n\n");
        scanf(" %c", &gameOption);
        lineBreak();

        // If the user types s, it starts the game
        if (gameOption == 's') {
            startGame();
            break;
        }
        // If the user types h, it shows the highscores
        else if (gameOption == 'h') {
            highscores();
            break;
        }
        // If the user types e, it exits out the program
        else if (gameOption == 'e') {
            exitGame();
            break;
        }
        // If the user types an invalid character, it will ask the user to type it again
        else {
            printf("That character is invalid, please select one of the options below\n\n");
        }
    }
}


int main(void) {
    srand(time(NULL));

    startUp();

    mainMenu();

    return 0;

}

