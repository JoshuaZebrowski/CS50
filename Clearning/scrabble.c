#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int points[26] =   {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

    string name1 = get_string("Name of Player 1: ");
    string name2 = get_string("name of Player 2: ");


    string word1 = get_string("%s's word: ", name1);
    string word2 = get_string("%s's word: ", name2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);


    //telling the user information
    printf("Player 1 has a score of: %i\n", score1);
    printf("Player 2 has a score of: %i\n", score2);

    if (score1 > score2)
    {
        printf("%s wins!\n", name1);
    }
    else if (score1 == score2){
        printf("It is a tie, both players have the same points!\n");
    }
    else if (score1 < score2)
    {
        printf("%s wins!\n", name2);
    }
}

int compute_score(string word)
{
    int score = 0;
    int n = 0;
    while (word[n] != '\0')
    {
        word[n] = toupper(word[n]);
       for(int i = 0; i < 26; i++)
       {
            if (letters[i] == word[n])
            {
                score += points[i];
                break;
            }
       }
    n++;
    }
    return score;
}
