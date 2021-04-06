/*
** EPITECH PROJECT, 2020
** test_my_printf4.c
** File description:
** Unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "myprintf.h"

void redirect_all_std5(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, unsigned_number, .init = redirect_all_std5)
{
    my_printf("%u", 4200000) ;
    cr_assert_stdout_eq_str("4200000");
}

Test(my_printf, mixed_string_and_number2, .init = redirect_all_std5)
{
    my_printf("%s%d pour un %d", "Astek42", 42, 42) ;
    cr_assert_stdout_eq_str("Astek4242 pour un 42");
}

Test(my_printf, put_pourcent, .init = redirect_all_std5)
{
    my_printf("%d%% de réussite", 100) ;
    cr_assert_stdout_eq_str("100% de réussite");
}

Test(my_printf, str_null, .init = redirect_all_std5)
{
    char *str = NULL;
    my_printf("%s", str) ;
    cr_assert_stdout_eq_str("(null)");
}