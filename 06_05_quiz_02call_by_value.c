// time:- 8:25
// question 6
// not correct

#include<stdio.h>
int change(int a, int b)
{
    b=a+10;
    return b;
}
int main()
{
    int a=10,b;
    printf("the current value of a is: %d\n",a);
    change(a,b);
    printf("after increasing ten time the value of a is:%d",b);
    return 0;
}