/** 
* @file main.h
* Tic tac toe game  application with 4 mathematical operations
*
*/
#ifndef __MAIN_
#define __MAIN_

#include <stdio.h>
#include <stdlib.h>

/**
 * Initialize the matrix 
 * 
 */
void init_matrix(void);

/**
 * This function is to obtain input from user
 * 
 */
void get_player_move(void);

/**
 * This function is to obtain input from computer
 * 
 */
void get_computer_move(void);

/**
 * This is to display the output
 * 
 */
void disp_matrix(void);

#endif /**#define __MAIN_ */