#include<stdio.h>
void func(int a)
{
    printf("the adress of a is %u\n",&a); 
}

int main()
{			
    int i=5;
    printf("the value of i is %u\n",i);
    func(i);
    printf("The adress of i is %u\n",&i);
    return 0;
}
