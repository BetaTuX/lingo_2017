/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** header file
*/

#ifndef __LINGO_H_
#define __LINGO_H_

#include <stdbool.h>

#define ERROR (84)

#define START_MSG "*: invalid letter\n?: incorrectly placed letter\nWill you \
find the secret word?\n"
#define TOO_SHORT_MSG "Word too short. Retry.\n"
#define WIN_MSG "\nYou won!\n"
#define LOSE_MSG "\nYou lost!\n"

char *random_word(char **arr);
bool verify_file(char **arr);
void destroy_arr(char **arr);
char **parse_file(char *path);
int game_loop(char *word);
int strnccnt(char *, char, int);
bool verify_correct(char *, char *, int);

#endif
