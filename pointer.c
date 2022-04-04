#include<stdio.h>

int main()
{			
    int a;
    int *b=&a;
    printf("enter a: ");
    scanf("%d",&a);
    printf("the value stored is :%u",*(&a));
    printf(" and the adress that value stored is: %u",&a);
    printf(" and the adress that value stored is: %u\n",&b);
    printf("the value stored is :%u",*(&b));
    return 0;
}
