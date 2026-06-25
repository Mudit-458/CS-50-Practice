#include <cs50.h>
#include <stdio.h>

int main(void)
// Cash exchange (Using Greedy Algorithms)
{
    int n;
    int coins = 0; 
    // Asking repeated inputs
    do
    {
        n = get_int("Cash Owed:");
    } 
    while (n < 0);
    
    // Store remaining cents to calculate change
    int cent = n;
    // Use maximum possible 25$ first
    while (cent >= 25)
    { 
        coins++;
        cent -= 25;
    }
    // Then use 10$
    while (cent >= 10)
    {
        coins++;
        cent -= 10;
    }
    // Then use 5$
    while (cent >= 5)
    {
        coins++;
        cent -= 5;
    }
    // Then use 1$ for whatever is left
    while (cent >= 1)
    {
        coins++;
        cent -= 1;
    }
    // Print minimum number of coins needed 
    printf("%i\n", coins);
}
