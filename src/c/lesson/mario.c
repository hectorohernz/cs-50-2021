#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while(n < 1);
    
    
    for(int i = 0; i < n; i++)
    {
        printf("f");
    }
    printf("\n");
}
