/*
** EPITECH PROJECT, 2020
** strings.c
** File description:
** oui
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(sum_strings_length, sum_str_lengths)
{
    int value = sum_strings_length(5, "Hello", "a", "toto", "", "plop");
    cr_assert_eq(value , 14);
}
