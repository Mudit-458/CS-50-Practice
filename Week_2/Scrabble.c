#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int score(string);

int main(void)

{
    // Ask user for input
    string word[2];
    word[0] = get_string("WORD by player 1: ");
    word[1] = get_string("WORD by player 2: ");
    // Take scores from helper function
    int score1 = score(word[0]);
    int score2 = score(word[1]);
    // Compare Scores
    if (score1 > score2)
        printf("Player 1 wins!");
    else if (score1 < score2)
        printf("Player 2 wins");
    else
        printf("Tie!");

    printf("\n");
    return 0;
}

int score(string word)
{
    // Defining points of each letter
    int point[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // Changing Lower to Uppercase for same result
    int sum = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        word[i] = toupper(word[i]);
        // Ignores everything except letters
        if (isalpha(word[i]))
        // Sum of Points
        {
            int index = word[i] - 65;
            sum = sum + point[index];
        }
    }
    return sum;
}
