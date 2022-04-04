#include<stdio.h>

int main()
{			
    int a;
    printf("enter no. : ");
    scanf("%d",&a);
    for(int i=a; i; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}