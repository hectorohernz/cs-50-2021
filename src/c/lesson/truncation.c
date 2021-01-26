#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    float sum = x / (float) y;
    printf("%f\n", sum);
}