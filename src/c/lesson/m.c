#include <cs50.h>

#include <stdio.h>

int main(void)
{
    // Asking For Card Number
    long userInput;
    do
    {
        userInput = get_long("Number: ");
    } while (userInput < 0);

    string typeOfCard;
    int lenOfDigs = 2;
    long int twoDigs = userInput;

    // Getting First Two Digits In Card Number
    while (twoDigs >= 100)
    {
        lenOfDigs++;
        twoDigs /= 10;
    }

    // Card lenOfDigs isn't vaild return Invaild
    if (lenOfDigs != 13 || lenOfDigs != 15 || lenOfDigs != 16)
        printf("INVALID\n");
    return 0;

    // Check first two digits in card for vendor // else invaild
    if (twoDigs == 34 || twoDigs == 37)
    {
        typeOfCard = "AMEX\n";
    }
    else if (twoDigs >= 50 && twoDigs <= 55)
    {
        typeOfCard = "MASTERCARD\n";
    }
    else if ((twoDigs / 10) == 4)
    {
        typeOfCard = "VISA\n";
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }

    // Adding each digit into an array 
    int digs[lenOfDigs];
    long int thruDigits = userInput;
    for (int i = lenOfDigs - 1; i >= 0; i--)
    {
        digs[i] = thruDigits % 10;
        thruDigits /= 10;
    }

    // Mulitplying every other element by 2 starting from the back. 
    // If product is two digits, reduce into single digits and add to sum. Ex: 13 => 1+3 = sum + 4;
    int sum = 0;
    for (int i = lenOfDigs - 2; i >= 0; i -= 2)
    {
        long int total = digs[i] * 2;
        if (total >= 10)
        {
            long int single = total;
            while (single > 0)
            {
                int d = single % 10;
                sum += d;
                single /= 10;
            }
        }
        else
        {
            sum += total;
        }
    }

    // Adding the sum of the numbers which weren't multi
    // Different case for even or odd lenOfDigss 
    int start;
    if (lenOfDigs % 2 == 0)
        start = 1;
    else
        start = 0;

    for (int i = start; i <= lenOfDigs - 1; i += 2)
    {
        sum += digs[i];
    }
    // Checking if the second digit isn't is 0.  1-9 
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Printing vaild card vendor 
    printf("%s", typeOfCard);
}