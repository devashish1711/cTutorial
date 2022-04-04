#include<stdio.h>

int main()
{			
    int i;
    printf("Enter the vlaue of i: ");
    scanf("%d",&i);
    while (i<=20)
    {
        if (i>=10)
        {
            printf("the value of i is: %d\n",i);
        }
        else if (i>=1)
        {
            printf("the value of used 2nd loop i is: %d\n",i);
        }
        else
        {
            printf("the number you enter should be greater than 2!\n");
            break;
        }
        i++;
    }
    return 0;
}