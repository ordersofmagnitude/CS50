#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// code allows one to play the game scrabble

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

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }


}

int compute_score(string word)
{
    int value = 0;
    // TODO: Compute and return score for string
    for (int i = 0, n = strlen(word); i< n; i++)
    {
        if (isalpha(word[i]))
        {
            word[i] = tolower(word[i]);
            char c = word[i];
            int index = (int) c - 97;
            int x = POINTS[index];
            value += x;
        }
        
    }
    printf("%i\n", value);
    return value;
}
