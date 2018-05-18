/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** main file
*/

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lingo.h"

static char *fecth_random_word(char *path)
{
	char **arr = NULL;
	char *word = NULL;

	arr = parse_file(path);
	if (arr == NULL)
		return (NULL);
	srand(time(NULL));
	if (verify_file(arr))
		word = strdup(random_word(arr));
	destroy_arr(arr);
	return (word);
}

int main(int argc, char **argv)
{
	char *word = NULL;

	if (argc != 2)
		return (ERROR);
	word = fecth_random_word(argv[1]);
	if (word == NULL)
		return (ERROR);
	if (game_loop(word))
		printf(WIN_MSG);
	else
		printf(LOSE_MSG);
	free(word);
	return (0);
}
