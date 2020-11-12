//tictactoe.cc – DO alter this file.  
//Add your functions above runGame().
//NOTE that I have commented out the functions so it will compile.  You
//MUST uncomment these as you complete them for the game to work and for
//testing.

#include <stdio.h>
#include "tictactoe.h"

/*
 This is my clearBoard() method which takes a pointer to a
 gameData_t structure. It will then loop through the array
 and set all the indexes to a spce(' ').
 */
void clearBoard(gameData_t *clearPtr){
    
    //Enter the outter loop.
    for(int i = 0; i < 3; i ++){
        
        //Enter the inner loop.
        for(int j = 0; j < 3; j ++){
            
            //Here I set each index of board to a space(' ').
            clearPtr -> board[i][j] = ' ';
            
        }
    }
    
    return;
}

/*
 This is my getPlayerInfo() method that takes a pointer to a
 gameData_t structure and sets the player's names and
 ages for the game.
*/
void getPlayerInfo(gameData_t *gamePtr){
    
    //Here I get player 1's name and age for the game.
    printf("Player 1 enter your name: ");
    scanf("%s", gamePtr -> name1);
    printf("Player 1 enter your age: ");
    scanf("%d", &gamePtr -> age1);
    
    printf("\n");
    printf("\n");
    
    //Here I get player 2's name and age for the game.
    printf("Player 2 enter your name: ");
    scanf("%s", gamePtr -> name2);
    printf("Player 2 enter your age: ");
    scanf("%d", &gamePtr -> age2);
    
    return;
}

/*
 This is my printPlayerInfo method that will print
 each of the players info for the game.
 */
void printPlayerInfo(gameData_t helper){
    
    //Print player ones info.
    printf("Player 1 is %s age %d and will be Xs\n", helper.name1, helper.age1);
    
    //Print player twos info.
    printf("Player 2 is %s age %d and will be Os", helper.name2, helper.age2);
    
    return;
}

/*
 Here is the printTurnHeader!!!!!
 */
void printTurnHeader(gameData_t gameVar, char turnVar){
    
    for(int i = 0; i < 50; i ++){
        if(i != 49){
            printf("-");
        }
        else{
            printf("-\n");
        }
        
    }
    
    if(turnVar == 'X'){
        printf("---------- %s's Turn --------------------\n", gameVar.name1);
        printf("---------- You are Xs --------------------\n");
    }
    else{
        printf("---------- %s's Turn --------------------\n", gameVar.name2);
        printf("---------- You are Os --------------------\n");
    }
    
    
    
    for(int i = 0; i < 50; i ++){
        if(i != 49){
            printf("-");
        }
        else{
            printf("-\n");
        }
        
    }
    
    return;
}


void runGame() {
  
  gameData_t gameData;
  
  int win = 0;
  int tie = 0;  
  char turn = 'X';
  
  //Set board to all spaces.
  clearBoard(&gameData);
  
  //Get both players name and age
  getPlayerInfo(&gameData);
  
  //Show the player info
  printf("\n");
  printPlayerInfo(gameData);
  printf("\n");
  
  while (!win && !tie) {
    int count = 0;
    
    printTurnHeader(gameData, turn);
    //printBoard(gameData);
    //getMove(&gameData, turn);
    
    //Check for win
    //win = checkWin(gameData, turn);
    if (win == 1) {
      printf("--------------------------------------------------\n");      
      if (turn == 'X') {        
        printf("---------- %s WINS! --------------------\n", gameData.name1);
      } else {        
        printf("---------- %s WINS! --------------------\n", gameData.name2);
      }
      printf("--------------------------------------------------\n");      
      //printBoard(gameData);
      printf("\n");
    } else {
      //tie = checkTie(gameData);
      if (tie == 1) {
        printf("--------------------------------------------------\n");      
        printf("---------- TIE GAME! --------------------\n");
        printf("--------------------------------------------------\n");      
        //printBoard(gameData);
      }
    }
    
    //Toggle turn so other player goes next.
    if (turn == 'X') turn = 'O';
    else turn = 'X';
  }
}






