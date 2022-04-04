#include<stdio.h>

int main()
{			
    int i=1,a;
    printf("enter the number u wanted to print: ");
    scanf("%d",&a);
    do{
        printf("the values are: %d\n",i);
        i++;
    }while(i<=a);
    return 0;
}
