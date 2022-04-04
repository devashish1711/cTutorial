#include<stdio.h>

int main()
{
    int i;
    printf("Enter the amount of number you wanted to print:");
    scanf("%d",&i);
    i = 169;
    do
    {
        printf("hello world %d\n",i);
        i+=10;  
    }while(i<100);
return 0;
}