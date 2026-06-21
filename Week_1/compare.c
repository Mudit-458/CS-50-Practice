#include<stdio.h>
#include<cs50.h>

int main(void) 

{
    int x = get_int ("What's x ?"); 
    int y = get_int ("What's y?");
if (x < y)
{printf("x is smaller than y\n");}

else if (x > y)
{printf("x is larger than y\n ");}

else 
{printf("x is equal to y\n");}

}