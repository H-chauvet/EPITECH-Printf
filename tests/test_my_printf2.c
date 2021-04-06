/*
** EPITECH PROJECT, 2020
** test_my_printf2.c
** File description:
** Unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "myprintf.h"

void redirect_all_std2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_int3, .init = redirect_all_std2)
{
    my_printf("%d", 10) ;
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, simple_char, .init = redirect_all_std2)
{
    my_printf("A") ;
    cr_assert_stdout_eq_str("A");
}

Test(my_printf, simple_char2, .init = redirect_all_std2)
{
    my_printf("a") ;
    cr_assert_stdout_eq_str("a");
}

Test(my_printf, simple_char3, .init = redirect_all_std2)
{
    char a = 'B';
    my_printf("%c", a) ;
    cr_assert_stdout_eq_str("B");
}
