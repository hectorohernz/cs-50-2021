#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

bool isVaildNum(string num);
string convertToKey(string input, int key);

int main(int argc, string argv[])
{
    // Asking the user for key
    string key = argv[1];

    // Checking for one key that isn't null and no other arugments are included.
    if (key == NULL || argv[2] != NULL)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // 
    bool vaildNum = isVaildNum(key);
    if (!vaildNum)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int keyToInt = atoi(key);

    string userInput = get_string("plaintext: ");
    string output = convertToKey(userInput, keyToInt);
    printf("ciphertext: %s\n", output);
}

string convertToKey(string input, int key)
{
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        char letter;
        char currentChar = input[i];
        if (isalpha(currentChar))
        {
            if (islower(currentChar))
            {
                int reminder = (((int)currentChar - 97) + key) % 26;
                letter = (int)97 + reminder;
                input[i] = (char)letter;
            }
            else
            {
                int reminder = (((int)currentChar - 65) + key) % 26;
                letter = (int)65 + reminder;
                input[i] = (char)letter;
            }
        }
    }
    return input;
}

bool isVaildNum(string num)
{
    int len = strlen(num);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(num[i]))
        {
            return false;
        }
    }

    return true;
}
