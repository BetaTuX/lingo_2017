/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** file parsing
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lingo.h"

static char *dupfree(char **str)
{
	char *ans = NULL;

	if (*str == NULL)
		return (NULL);
	ans = strdup(*str);
	if (ans == NULL)
		return (NULL);
	free(*str);
	*str = NULL;
	return (ans);
}

char **parse_file(char *path)
{
	FILE *file = fopen(path, "r");
	char **arr = NULL;
	char *line = NULL;
	size_t size = 0;
	int line_nb = 1;

	if (file == NULL)
		return (NULL);
	for (; 0 < getline(&line, &size, file); line_nb++) {
		if (line[strlen(line) - 1] == '\n')
			line[strlen(line) - 1] = '\0';
		arr = realloc(arr, (line_nb + 1) * sizeof(char *));
		if (arr == NULL)
			return (NULL);
		arr[line_nb - 1] = dupfree(&line);
		arr[line_nb] = NULL;
	}
	free(line);
	fclose(file);
	return (arr);
}

static bool verify_word(char *str, int *nb)
{
	for (; *str; str++)
		if (islower(*str) == false)
			return (false);
	*nb += ((int)strlen(str) != 0);
	return (true);
}

bool verify_file(char **arr)
{
	int word_nb = 0;

	for (int i = 0; arr[i]; i++)
		if (verify_word(arr[i], &word_nb) == false)
			return (false);
	return (word_nb == 0);
}

void destroy_arr(char **arr)
{
	for (int i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);
}
