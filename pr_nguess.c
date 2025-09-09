/*Project 2: Guessing Game*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int random = rand() % 100 +1;
    int guess;
    int try=0;
    printf("Guess a no. btw 1-100:");
    while (1)
    {
    try++;
    scanf("%d",&guess);
    if (guess == random)
    {
        printf("Correct Guess! Tries taken %d\n",try);
            break;
    }


    else if (guess>random)
    {
        printf("Too High!\n");
    }
    else
    {
        printf("Too Low!\n");
    }
    
    }
    
    
    
    

}