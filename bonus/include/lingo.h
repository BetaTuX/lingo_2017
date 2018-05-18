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
#define USAGE "USAGE: ./lingo [FILE]\nA simple Motus game\n\n\
The file represents the word database used by the program\n\
It should be formatted like:\
\n\t.________\
\n\t|word$\n\t|second$\n\t|third$\n\n\
Words should only contain lowercase letter, please try to avoid empty lines\n\n\
AUTHORS:\nGabin, Argann\n"

char *random_word(char **arr);
bool verify_file(char **arr);
void destroy_arr(char **arr);
char **parse_file(char *path);
int game_loop(char *word);

#endif
