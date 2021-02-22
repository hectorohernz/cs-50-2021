#include <stdio.h>
#include <cs50.h>


int main(void){
    int height;
    do{
      height = get_int("Enter a height between 1 and 8:\n");
    }while(height < 1 || height > 8);
    printf("\n");
    for(int i=1;i <= height;i++){
        for(int x = height; x > i;x--){
            printf(" ");
            
        }
        for(int y = 1; y <= i; y++){
            printf("#");
        }
        printf("  ");
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}