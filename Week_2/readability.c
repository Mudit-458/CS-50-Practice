#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Heads up for compiler
int letter_count(string text);
int word_count(string text);
int sentence_count(string text);
int calculate_grade(int letters, int words, int sentences);
void print_grade(int grade);

int main(void)
{
    // Taking input from user
    string text = get_string("Text: ");
    int letters = letter_count(text);
    int words = word_count(text);
    int sentences = sentence_count(text);
    int grade = calculate_grade(letters, words, sentences);
    print_grade(grade);
}
// helper funtion to calculate index from Coleman-Liau formula
int calculate_grade(int letters, int words, int sentences)
{
    // L is average number of letters per 100 words
    float L = ((float) letters / (float) words) * 100;
    // S is average number of sentences per 100 words
    float S = ((float) sentences / (float) words) * 100;
    // Coleman-Liau index formula
    float index = 0.0588 * L - 0.296 * S - 15.8;
    // Round up index to integer
    return round(index);
}
// Helper function to print Grade on screen
void print_grade(int grade)
{
    if (grade < 1)
        printf("Before Grade 1\n");
    else if (grade > 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", grade);
}
// helper function to count letters
int letter_count(string text)
{
    // Extracting length of input
    int n = strlen(text);
    int L = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {
            L++;
        }
    }
    return L;
}
// Helper function to count Words
int word_count(string text)
{
    int n = strlen(text);
    // w = 1 at start because there's 1 word even without space
    int w = 1;
    for (int i = 0; i < n; i++)
    {
        if (text[i] == ' ')
        {
            w++;
        }
    }
    return w;
}
// Helper function to count sentences
int sentence_count(string text)
{
    int n = strlen(text);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            s++;
        }
    }
    return s;
}