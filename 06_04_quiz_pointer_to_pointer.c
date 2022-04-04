#include<stdio.h>

int main()
{			
    int i;
    printf("enter the value of i: ");
    scanf("%d",&i);
    int *ptr;
    int **ptr_ptr;

    ptr=&i;
    ptr_ptr=&ptr;

    printf("the value of i is: %d", **ptr_ptr);
    return 0;
}