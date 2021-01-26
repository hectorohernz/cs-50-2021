#include <stdio.h>
#include <cs50.h>

// Prototype : Allows for compiler to access the method meow without any errors
void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
           printf("meow\n");
    }
}