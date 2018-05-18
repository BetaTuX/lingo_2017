/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** game loop file
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lingo.h"

static int strccnt(char *str, char c)
{
	for (int i = 0; str[i]; i++)
		if (str[i] == c)
			return (i);
	return (-1);
}

static bool display_word(char *word, char *user_word)
{
	int i = 1;
	int verif = 1;

	printf("%c", word[0]);
	while (word[i]) {
		if (user_word && (user_word[i] == word[i])) {
			printf("%c", word[i]);
			verif++;
		} else if (user_word && strccnt(word, user_word[i]) != i && \
strccnt(word, user_word[i]) != -1)
			printf("?");
		else
			printf("*");
		i++;
	}
	printf("\n");
	fflush(stdout);
	return (verif == i);
}

static bool line_valid(char *str, int len)
{
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	if ((int)strlen(str) != len)
		printf(TOO_SHORT_MSG);
	return ((int)strlen(str) == len);
}

static char *get_user_word(int len)
{
	char *line = NULL;
	size_t size = 0;

	while (1) {
		printf(">");
		fflush(stdout);
		if (getline(&line, &size, stdin) <= 0) {
			free(line);
			return (NULL);
		} else if (line_valid(line, len))
			return (line);
		free(line);
		line = NULL;
	}
	return (NULL);
}

int game_loop(char *word)
{
	char *str = NULL;
	int len = (int)strlen(word);

	printf(START_MSG);
	display_word(word, NULL);
	for (int loop = 1; loop < len + 1; loop++) {
		printf("\nRound %i\n", loop);
		str = get_user_word(len);
		if (str == NULL)
			break;
		else if (display_word(word, str)) {
			free(str);
			return (1);
		}
		free(str);
	}
	return (0);
}
