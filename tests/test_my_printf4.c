/*
** EPITECH PROJECT, 2020
** test_my_printf4.c
** File description:
** Unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "myprintf.h"

void redirect_all_std4(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_octal, .init = redirect_all_std4)
{
    my_printf("%o", 10) ;
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, hard_octal, .init = redirect_all_std4)
{
    my_printf("%o", 1397348) ;
    cr_assert_stdout_eq_str("5251144");
}

Test(my_printf, simple_binary, .init = redirect_all_std4)
{
    my_printf("%b", 10) ;
    cr_assert_stdout_eq_str("1010");
}

Test(my_printf, hard_binary, .init = redirect_all_std4)
{
    my_printf("%b", 1998705) ;
    cr_assert_stdout_eq_str("111100111111101110001");
}
