/* #include <cs50.h> */
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // ask the user for a message using get_string
    // convert the given string into a series of 8-bit binary numbers, one for each character of the string.
    // should be a \n after the last “byte” of 8 symbols as well.

    *char message = get_string("Message: ");
    int letter[1020] = {};
    int binary[8] = {};
    int index = 0;
    int i = 7;
    while (message[index] != '\0')
    {
        // turn the text into decimal numbers.
        letter[index] = message[index];
        int num_letter = letter[index];
        while (i != 0)
        {
            binary[i] = num_letter % 2;
            num_letter = num_letter / 2;
            i--;
        }
        i = 7;

        for (int j = 0; j < 8; j++)
        {
            print_bulb(binary[j]);
        }

        index++;
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
