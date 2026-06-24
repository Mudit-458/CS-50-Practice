#include <cs50.h>
#include <stdio.h>

int main(void)
// Making mario's pyramid
{
    int s;
    // Asking repeated inputs
    do
    {
        s = get_int("Height of pyramid:");
    }
    while (s <= 0);

    {
        // Correcting allignment and defining repeatation
        for (int r = 0; r < s; r++)
        {
            for (int h = 0; h < s - (r + 1); h++)
                printf(" ");

            int l = 1;
            for (l = 1; l <= r + 1; l++)
            {
                printf("#");
            }
            {
                printf("\n");
            }
        }
    }
}