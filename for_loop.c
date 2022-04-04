#include<stdio.h>

int main()
{			
    int i;
    printf("enter the number u wanted to take loop:");
    scanf("%d",&i);
    for(int a=1; a<i;i++)
    {
        printf("do this loop%d\n",a);
    }
    return 0;
}