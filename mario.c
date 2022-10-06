#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; // height of the pyramid
    do
    {
        h = get_int("height: ");
    }
    while (h < 1 || h > 8);

    int i; // number of rows
    for (i = 0; i < h; i++)
    {
        int s; // number of spaces
        for (s = 0; s < h - i - 1 ; s++)
        {
            printf(" ");
        }
        int j; // number of columns
        for (j = 0; j <= i ; j++)
        {
            printf("#");
        }

        printf("  ");
        
        for (j = 0; j <= i ; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}