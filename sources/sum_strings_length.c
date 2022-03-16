/*
** EPITECH PROJECT, 2020
** strings.c
** File description:
** oui
*/

#include <stdarg.h>

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return (c);
}

int sum_strings_length(int n, ...)
{
    va_list parameters;
    int i = 0;
    int sum = 0;
    char *str;
    
    va_start(parameters, n);
    while (i < n) {
        sum = sum + my_strlen(va_arg(parameters, char *));
        i++;
    }
    va_end(parameters);
    return (sum);
}
