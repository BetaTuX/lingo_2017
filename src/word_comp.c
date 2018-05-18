/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** word_compare fx
*/

#include <string.h>
#include "lingo.h"

bool verify_correct(char *word, char *user, int ind)
{
	int tot = strnccnt(word, user[ind], strlen(word));
	int cor = 0;

	for (int i = 0; word[i]; i++)
		if (word[i] == user[i] && word[i] == user[ind])
			cor++;
	if (cor == tot)
		return (false);
	else if (cor < tot)
		return (true);
	return (tot < cor);
}
