/*
** EPITECH PROJECT, 2020
** test_my_printf3.c
** File description:
** Unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "myprintf.h"

void redirect_all_std3(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, hexa_lowcase_simple, .init = redirect_all_std3)
{
    my_printf("%x", 10) ;
    cr_assert_stdout_eq_str("a");
}

Test(my_printf, hexa_uppercase_simple, .init = redirect_all_std3)
{
    my_printf("%X", 10) ;
    cr_assert_stdout_eq_str("A");
}

Test(my_printf, hexa_lowcase_medium, .init = redirect_all_std3)
{
    my_printf("%x", 2545677) ;
    cr_assert_stdout_eq_str("26d80d");
}

Test(my_printf, hexa_uppercase_medium, .init = redirect_all_std3)
{
    my_printf("%X", 2545677) ;
    cr_assert_stdout_eq_str("26D80D");
}
