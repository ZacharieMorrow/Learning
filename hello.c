#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string firstname = get_string("What's your first name? ");
    string lastname = get_string("What's your last name? ");
    printf("hello, %s %s\n", firstname, lastname);
}