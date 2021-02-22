#include <stdio.h>
#include <cs50.h>
void pyramids();

int main(void)
{
    void pyramids();
}

void pyramids()
{
    char brick = '#';
    int getUserInput = get_int("Enter a number between 1 and 8");
    string base = "";
    for(int i=1; i <= getUserInput;i++)
    {
        base += brick + '\n';
        printf(base);
    }
}