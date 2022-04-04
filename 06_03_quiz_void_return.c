#include<stdio.h>
void addition(int a, int b, int *sum)
{
    *sum = a+b;
}
void average(int a, int b, float *avg)
{
    *avg = (float)(a+b)/2;
}

int main()
{			
    int a=6,b=3,sum;
    float avg;
    addition(a,b,&sum);
    printf("the sum of two number are: %d\n",sum);
    average(a,b,&avg);
    printf("the avg of two number are:%f",avg);
    return 0;
}

