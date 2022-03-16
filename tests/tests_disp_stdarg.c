/*
** EPITECH PROJECT, 2020
** stdarg.c
** File description:
** oui
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(disp_stdarg, basic, .init=cr_redirect_stdout)
{
    disp_stdarg("csiis",'X', "hi", 10, -3, "plop");
    cr_assert_stdout_eq_str("Xnhin10n-3nplopn", "");
}
