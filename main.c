#include <stdio.h>

// for strcpy()
#include <string.h>

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
    char listOptions[3] = {'r','p','s'};

    // userChoiceChar - Stores the user input (r, p, s)
    // userChoice - Changes input so it can be printed out (rock, paper, scissors)
    char userChoiceChar;
    char userChoice[10];

    // compChoiceChar - Stores the user input (r, p, s)
    // compChoice - Changes input so it can be printed out (rock, paper, scissors)
    char compChoiceChar;
    char compChoice[10];



// Gets the user choice
    while (1) {
        printf("Select an option below:\n");
        printf("(R)ock\n(P)aper\n(S)cissors\n\n")+1;
        scanf(" %c", &userChoiceChar);

        // If rock is picked, it breaks out the loop and changes userChoice to rock
        if (userChoiceChar == 'r' || userChoiceChar == "R") {
            strcpy(userChoice,"rock");
            lineBreak();
            printf("User picked:     : ");
            puts(userChoice);
            break;
        }
        // If paper is picked, it breaks out the loop and changes userChoice to paper
        else if (userChoiceChar == 'p' || userChoiceChar == 'P') {
            strcpy(userChoice,"paper");
            lineBreak();
            printf("User picked:     : ");
            puts(userChoice);
            break;
        } 
        // If scissors is picked, it breaks out the loop and changes userChoice to scissors
        else if (userChoiceChar == 's' || userChoiceChar == "S") {
            strcpy(userChoice,"scissors");
            lineBreak();
            printf("User picked:     : ");
            puts(userChoice);
            break;
        }
        // If the user does not enter (r, p, s) it asks them again
        else {
            lineBreak();
            printf("Error, input is invalid\n\n");
        }
    } // END while //


// Gets computer choice
    ranNum = rand() % 3; // Random number 0-2
    compChoiceChar = listOptions[ranNum];

    // If rock is picked, it breaks out the loop and changes compChoice to rock
    if (compChoiceChar == 'r') {
        strcpy(compChoice,"rock");
        printf("Computer Chooses: ");
        puts(compChoice);
    }
    // If paper is picked, it breaks out the loop and changes compChoice to paper
    else if (compChoiceChar == 'p') {
        strcpy(compChoice,"paper");
        printf("Computer Chooses: ");
        puts(compChoice);
    }
    // If scissors is picked, it breaks out the loop and changes compChoice to scissors
    else if (compChoiceChar == 's') {
        strcpy(compChoice,"scissors");
        printf("Computer Chooses: ");
        puts(compChoice);
    } // END if //
    

// rock paper scissors logic
    // User and computer chooses same option, gives draw
    if (userChoiceChar == compChoiceChar) {
        printf("\n! DRAW !");
    }
    // User is rock and computer is scissors, gives player win
    else if (userChoice == "rock" && compChoice == "scissors") {
        printf("\n! PLAYER WINS !");
    }
    // User is paper and computer is rock, gives player win
    else if (userChoice == "paper" && compChoice == "rock") {
        printf("\n! PLAYER WINS !");
    }
    // User is scissors and computer is paper, gives player win
    else if (userChoice == "scissors" && compChoice == "paper")
    {
        printf("\n! PLAYER WINS !");
    }
    // All other combos left is when the computer wins, as we have rulled out draws and player wins
    else {
        printf("\n! COMPUTER WINS !");
    } // END if //
}


// NOT FINISHED
void highscores() {
    lineBreak();

    printf("highscores");



}


// NOT FINISHED
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

