#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompts the user for their name and then prints
    string name = get_string("What's your name?: ");
    printf("hello, %s \n", name);
}