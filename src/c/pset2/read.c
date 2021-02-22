#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // ToDo: Ask User for string
    string sentences = get_string("Text :");

    // ToDo: Loop through the string and countWords and letters
    int wordCount = 1; //For last word in the sentence
    int letterCount = 0;
    int sentenceCount = 0;
    int lenOfSen = strlen(sentences);
    for (int i = 0; i < lenOfSen; i++)
    {
        char current = sentences[i];
        // ToDo: Check if the word has ended.
        if (current == ' ')
        {
            wordCount++;
        }
        // ToDo: Check if it's a letter
        if (current >= 65 && current <= 90)
        {
            letterCount++;
        }
        else if (current >= 97 && current <= 122)
        {
            letterCount++;
            // ToDo: Check if question mark, period, exclamation point
        }
        else if (current == 46 || current == 33 || current == 63)
        {
            sentenceCount++;
        }
    }

    float averageOfWords = (float)100 / (float)wordCount;
    float averageLetters = averageOfWords * letterCount;
    float averageSentences = averageOfWords * sentenceCount;

    float grade = (0.0588 * averageLetters) - (0.296 * averageSentences) - 15.8;
    int roundedGrade = roundf(grade);

    if (roundedGrade < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (16 <= roundedGrade)
    {
        printf("Grade 16+\n");
        return 0;
    }

    printf("Grade %i\n", roundedGrade);
    return 0;
}
