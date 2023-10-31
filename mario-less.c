#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //TODO: prompt user for a positive integer between, say, 1 and 8, inclusive,
    // to decide just how tall the pyramid should be
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        //Descendent
        for (int h = height - 1; h > i; h--)
        {
            printf(" ");
        }

        //Ascendent
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}