
/*
 * Filename: game_init.c
 * Author: David Palafox 
 * Userid: cs30xex
 * Date: Aug 06 2018
 * 
 * File containing functions to intialize game state
 */


#include "main.h"
#include "game_init.h"
#include <stdio.h>
#include <stdlib.h>



board_t * init_board() {


  // Initialize Board struct;
  board_t * pBoard = calloc( 1, sizeof( board_t ) );

  if( pBoard == NULL ) {
    fprintf( stderr,  BOARD_INIT_ERR );
    return NULL;
  }

  // Initialize array of char pointers
  pBoard->game_board = calloc( 8 , sizeof( char * ) );

  if( pBoard->game_board == NULL ) {
    fprintf( stderr,  BOARD_INIT_ERR );
    return NULL;
  }


  // Make each char * point to an array of chars
  for( int i = 0; i < BOARD_SIZE; i++ ) {

    pBoard->game_board[i] = calloc( 8 , sizeof ( char ) );

    if( pBoard->game_board[i] == NULL ) {
      fprintf( stderr,  BOARD_INIT_ERR );
      return NULL;
    }

  }



  pBoard->game_board[3][3]  = 1;
  pBoard->game_board[4][4] = 1;

  pBoard->game_board[3][4] = -1;
  pBoard->game_board[4][3] = -1;

  return pBoard;

}




