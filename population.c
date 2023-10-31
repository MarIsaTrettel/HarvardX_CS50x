#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int initial_size;
    do
    {
        initial_size = get_int ("Start size: ");
    }
    while(initial_size<9);
    // TODO: Prompt for end size
    int ending_size;
    do
    {
        ending_size = get_int("End size: ");
    }
    while (initial_size > ending_size);
    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    int calcu_size = initial_size;
    do
    {
        calcu_size= calcu_size + (calcu_size/3) -(calcu_size/4);
        year ++;
    }
    while (calcu_size < ending_size);
    // TODO: Print number of years
    printf("Years: %i\n",year);
}
