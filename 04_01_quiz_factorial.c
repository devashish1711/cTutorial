#include<stdio.h>

int main()
{			
    int a=1, end, fact=1;
    printf("enter the end value: ");
    scanf("%d",&end);
    while(a<end)
    {
       a++;
       fact *=a;
    }
    printf("the factorial of %d is %d\n",end,fact);
    return 0;
}
