// write a program to check wheteher a given number is prime or not using loops.

#include<stdio.h>

int main()
{			
    int n, prime=1;
    printf("neter n:");
    scanf("%d",&n);
    for(int a=2; a<n; a++)
    {
        if(n%a==0)
        prime = 0;
        break;
    }
    if(prime==0 && n!=2)
    {
        printf("this is not a prime number:");
    }
    else
    {
        printf("this is a prime number:");
    }
    return 0;
}