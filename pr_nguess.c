/*Project 2: Guessing Game*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    char cont;
   
   
   
  
    do
    {
        int guess;
        int try=0;
        int attempts=0;
        char level;
        int range=0;
        printf("Select a level to Play e,m,h:");
        scanf(" %c",&level);
        if (level=='e')
        {
            range=50;
            attempts=10;
        }
        else if (level=='m')
        {
            range=100;
            attempts=8;
        }
        else
        {
            range=150;
            attempts=12;
        }
        
        
    int random = rand() % range +1;
    printf("You have choosen 1 - %d range.\n",range);
    printf("You have %d attempts\n",attempts);
    while (try<attempts)
    {
    printf("Guess a no. btw 1-%d:",range);
    try++;
    scanf(" %d",&guess);
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
    if (try==attempts && guess!=random)
    {
        printf("You have run out of your %d attempts the no. was %d\n",attempts,random);
    }
    
    
    printf("Continue playing? press y or n:");

    scanf(" %c",&cont);
        

    } while (cont=='y'|| cont=='Y');
    
    printf("Thanks for playing!");
    return 0;
    
    
    
    

}
