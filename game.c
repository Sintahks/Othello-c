/*
 * Filename: game.c
 * Author: David Palafox 
 * Userid: cs30xex
 * Description: Functions needed for gameplay 
 * Date: Aug 09 2018
 */

#include "main.h"
#include <stdlib.h>
#include "game.h"

int isValidMove( direct_t * dirArr, board_t * board, char color, int x, int y ) {

  char * pieces[30] = {0};
  int pieceCount = 0;
  char * nextPiece = NULL;
  int seenDiff = 0;
  int seenSame = 0; 



  /* Iterate through all directions */

  for( int i = 0; i < numOfDirs; i++ ) {
    int nextPiece_x = x + dirArr[i].x_offset;
    int nextPiece_y = y + dirArr[i].y_offset; 
    seenSame = 0;
    seenDiff = 0;

    while( isInBounds( nextPiece_x, nextPiece_y ) ) {

      nextPiece = board->game_board[ nextPiece_x ] + nextPiece_y ;


      /* Visited empty space */
      if( *nextPiece == 0 ) {
        break;
      } 
      /* Visited space with different color 
       * Add mem address to array of pieces to convert */
      else if( *nextPiece == ( color * -1 ) ) {
        seenDiff = 1;
        pieces[pieceCount++] = nextPiece;
      }
      /* Visited space with same color */
      else {
        seenSame = 1;
        break;
      }
    }
  }

  if( pieceCount == 0 ) {
    return 0;
  }

  convertPieces( pieces, pieceCount );
  return 1;

}


int isInBounds( int x, int y ) {
  return ( 0 <= x && x < BOARD_SIZE && 0 <=y && y < BOARD_SIZE );
}

char printChar( char ch ) {
  if( ch == BLACK ) { return BLK_CHAR; }
  else if( ch == WHITE ) { return WHT_CHAR; }
  else { return '.'; }
}

/* Convert array of pieces to opposite color */
void convertPieces( char ** pieces, int pieceCount ) {
  for( int i = 0; i < pieceCount; i++ ) {
    pieces[i][0] = pieces[i][0] * -1;
  }
}
