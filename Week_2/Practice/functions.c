#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total_inputs = get_int("How many numbers you wanna multiply?");
    if (total_inputs <= 0)
    {
        printf("Enter a number more than 0\n");
        return 1;
    }
    float product = 1.0;
    for (int i = 0; i < total_inputs; i++)
    {
        float current_input = get_float("Enter value %d\n", i + 1);
    product = product * current_input;
    }
    printf("Answer : %f\n", product);
}