//tictactoe.cc – DO alter this file.  
//Add your functions above runGame().
//NOTE that I have commented out the functions so it will compile.  You
//MUST uncomment these as you complete them for the game to work and for
//testing.

#include <stdio.h>
#include "tictactoe.h"

void runGame() {
  
  gameData_t gameData;
  
  int win = 0;
  int tie = 0;  
  char turn = 'X';
  
  //Set board to all spaces.
  //clearBoard(&gameData);
  
  //Get both players name and age
  //getPlayerInfo(&gameData);
  
  //Show the player info
  printf("\n");
  //printPlayerInfo(gameData);
  printf("\n");
  
  while (!win && !tie) {
    int count = 0;
    
    //printTurnHeader(gameData, turn);
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






