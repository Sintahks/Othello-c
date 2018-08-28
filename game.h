#ifndef GAME_H_
#define GAME_H_
/*
 * Filename: game.h
 * Author: David Palafox 
 * Userid: cs30xex
 * Description: TODO 
 * Date: Aug 09 2018
 * Sources of Help: TODO
 */


int isValidMove( direct_t *, board_t * );

int isInBounds( int x, int y );

char printMap( char ch );

void convertPieces( char * pieces, int pieceCount );

#define numOfDirs 8

#endif
