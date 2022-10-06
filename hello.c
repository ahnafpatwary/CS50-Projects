#include <stdio.h>
#include <cs50.h>

int main(void)
//Takes the name form the user and prints the result
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}