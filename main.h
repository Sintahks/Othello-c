#ifndef MAIN_H_
#define MAIN_H_

struct Board {
  
  // Pointer to array of pieces on the board
  char ** game_board;
};

struct Direction {
  int x_offset;
  int y_offset; 
};

typedef struct Board board_t;
typedef struct Direction direct_t;


#define BOARD_SIZE 9
#define BLACK -1 
#define WHITE 1 
#define BLK_CHAR 'b'
#define WHT_CHAR 'w'
#endif
