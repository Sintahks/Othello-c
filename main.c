/*
 * Filename: main.c
 * Author: David Palafox 
 * Description: TODO 
 * Date: Aug 06 2018
 */




#include <stdio.h>
#include <stdlib.h>
#include "game_init.h"
#include "game.h"
#include "main.h"

/* Define Directions */
// Maybe set up array of directions? 

direct_t right = { 1, 0 }; 
direct_t left = { -1, 0 };
direct_t up = { 0, -1 };
direct_t down = { 0, 1 };
direct_t right_up_diag = {1, -1};
direct_t right_down_diag = { 1, 1 }; 
direct_t left_up_diag = { -1, -1 };
direct_t left_down_diag = { -1, 1 };

int main() {
  fprintf(stdout, "%s", "Attempting to initialize board\n" );

  board_t * board = init_board();

  if( board == NULL ) {
    fprintf( stderr, "Didn't work :(\n");
  }

  // print board


  for( int i = 0; i < BOARD_SIZE; i++ ) {

    for( int j = 0; j < BOARD_SIZE; j++ ) { 

      fprintf( stdout, "%c ", printChar( board->game_board[i][j] ) );
    }
      fprintf( stdout, "\n" );
  }

  return 1;
}
