#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 == score2)
    {
        printf("Tie!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!...");
    }
    else
    {
        printf("Player 1 wins!...");
    }

    // TODO: Print the winner
}

int compute_score(string word)
{
    // Iterar palabra
    int index = 0;
    int points[1020] = {};
    int sum = 0;
    while (word[index] != '\0')
    {
        int letter = word[index];

        if (letter > 96 && letter < 123)
        {
            points[index] = POINTS[letter - 97];
        }
        else if (letter > 64 && letter < 91)
        {
            points[index] = POINTS[letter - 65];
        }
        else
        {
            points[index] = 0;
        }
        index++;
    }

    for (int i = 0; i < 1021; i++)
    {

        sum = sum + points[i];
    }
    return sum;
}
