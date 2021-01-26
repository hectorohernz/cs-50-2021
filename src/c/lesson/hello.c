#include<stdio.h>
#include<cs50.h>

int main(void)
{
   // Greet User
   string answer = get_string("Whats your name\n");
   

   // Print User Name
   printf("Hello %s \n", answer);
}