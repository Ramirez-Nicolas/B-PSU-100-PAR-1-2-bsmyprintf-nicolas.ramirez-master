/*
** EPITECH PROJECT, 2020
** disp.c
** File description:
** oui
*/

#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}

int my_putstr(char const *str)
{
    for (int x = 0; str[x] != '\0'; x++)
        my_putchar(str[x]);
}

void disp_stdarg(char *s, ...)
{
    va_list parameters;
    int i = 0;

    va_start(parameters, s);
    while (s[i] != '\0') {
        if (s[i] == 'c') {
            my_putchar(va_arg(parameters, int));
            my_putchar('n');
        }
        if (s[i] == 's') {
            my_putstr(va_arg(parameters, char *));
            my_putchar('n');
        }
        if (s[i] == 'i') {
            my_put_nbr(va_arg(parameters, int));
            my_putchar('n');
        }
        i++;
    }
    va_end(parameters);
}
