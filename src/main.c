/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** my_printf.c
*/

#include <stdlib.h>
#include "myprintf.h"
#include <stdio.h>

int main(void)
{
    char *str = NULL;
    int b = 10;
    int *a = &b;

    my_printf("my pourcent %d%% de réussite\n", 100);
    my_printf("my pointer %p\n", a);
    my_printf("my char %c\n", 'c');
    my_printf("my decimal %d\n", 10);
    my_printf("my decimal %i\n", -25);
    my_printf("my unsigned %u\n", 100000);
    my_printf("my hexa_low %x\n", 2545);
    my_printf("my hexa_UP %X\n", 2545);
    my_printf("my octal %o\n", 200);
    my_printf("my str %s\n", "Test");
    my_printf("my space % d\n", 10);
    my_printf("my multi %s%d%x\n", "Test", 10, 2545);
    my_printf("my special %S\n", "T\ne\tst");
    my_printf("test multi espace % d puis % x puis % o\n", 10, 10, 10);
    my_printf("%s", str);
    return (0);
}