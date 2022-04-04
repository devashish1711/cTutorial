#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{			
    int number,random,guess,nguesses=1;
    srand(time(0));
    number= rand()%100 + 1; //generate random num b/t 0-100//
    // printf("the number is %d",number);
    do
    {
        printf("guess the number between 0 to 100: ");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("guess lower number!\n");
        }
        else if (guess<number)
        {
            printf("guess higher number!\n");
        }
        else
        {
            printf("you guess the correct in %d attempt:\n",nguesses);
        }
        nguesses++;
    } while(guess!=number);
    
    return 0;
}