#include<stdio.h>

int main()
{			
    int skip, i=0, a;
    printf("enter the value to skip: ");
    scanf("%d",&skip);
    printf("enter the value to end 'a' : ");
    scanf("%d",&a);
    while(i<a)
    {
        i++;
        if(i==skip)
        {
            continue;;
        }
        else
        {
            printf("%d\t",i);
        }
    }
    return 0;
}