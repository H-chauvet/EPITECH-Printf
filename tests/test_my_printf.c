/*
** EPITECH PROJECT, 2020
** test_my_printf.c
** File description:
** Unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "myprintf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world") ;
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string2, .init = redirect_all_std)
{
    char *str = "Unit test";
    my_printf("%s", str) ;
    cr_assert_stdout_eq_str("Unit test");
}

Test(my_printf, simple_int, .init = redirect_all_std)
{
my_printf("10") ;
cr_assert_stdout_eq_str("10");
}

Test(my_printf, simple_int2, .init = redirect_all_std)
{
my_printf("%i", 10) ;
cr_assert_stdout_eq_str("10");
}