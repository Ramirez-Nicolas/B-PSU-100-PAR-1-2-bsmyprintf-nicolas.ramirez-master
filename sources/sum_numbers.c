/*
** EPITECH PROJECT, 2020
** sum_numbers.c
** File description:
** oui
*/

#include <stdarg.h>
#include <stdio.h>

int sum_numbers(int n, ...)
{
    va_list parameters;
    int i = 0;
    int sum = 0;

    va_start(parameters, n);
    while (i < n) {
        sum = sum + va_arg(parameters, int);
        i++;
    }
    va_end(parameters);
    return (sum);
}
