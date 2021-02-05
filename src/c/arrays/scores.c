#include <stdio.h>
#include <cs50.h>

const int TOTAl = 3;

float aver(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length;i++){
        sum = sum + array[i];
    }

    return sum / (float) length;
}

int main(void)
{
    int scores[TOTAl];

    for (int i = 0; i < TOTAl; i++)
    {
        scores[i] = get_int("Score: ");
    }   
    float average = aver(TOTAl, scores);
    printf("Average: %f\n", average);
}