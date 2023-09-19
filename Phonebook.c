#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = get_string ("what's your name? ");
    int age = get_int ("what's your age? ");
    long number = get_long ("what's your phone number? ");

    printf ("Age is %i. Name is %s. Phone number is %s.", age, name, number);
}
