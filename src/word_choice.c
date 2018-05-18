/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** choose a random word
*/

#include <stdlib.h>
#include "lingo.h"

static int arr_length(char **arr)
{
	int i= 0;

	for (; arr[i]; i++);
	return (i);
}

char *random_word(char **arr)
{
	int length = arr_length(arr);
	int rand_ind = rand() % length;

	return (arr[rand_ind]);
}
