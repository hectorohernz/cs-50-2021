#include<stdio.h>
#include<cs50.h>

int main(void)
{
   string answer = get_string("Whats your name\n");
   printf("Hello %s \n", answer);
}