/*
** EPITECH PROJECT, 2018
** lingo
** File description:
** UT line validation
*/

#include <Criterion/criterion.h>
#include "lingo.h"

Test(line_validation, incorrect_char)
{
	char arr[][] = {
		"Pangolin",
		"pantalon",
		"parade",
		"pain"
	};
	bool expected = false;

	cr_assert_eq(verify_file(arr), expected);
	arr[][] = {
		"pang0lin",
		"p4nt4lon",
		"parade",
		"pa1n"
	};
	cr_assert_eq(verify_file(arr), expected);
}
