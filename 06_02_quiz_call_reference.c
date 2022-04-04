#include<stdio.h>
void change(int *ptr)
{
(*ptr)*=10;
}
int main()
{
    int a=5;
    int *ptr=&a;
    printf("the current value of a is: %d\n",a);
    change(ptr);
    printf("after increasing ten time the value of a is:%d",*ptr);
    return 0;
}