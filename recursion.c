#include<stdio.h>
int factorial(int x);

int main()
{		
    int a;
    printf("Enter the value to factorial: ");
    scanf("%d",&a);	
    printf("the value of factorial %d id %d",a,factorial(a));
    return 0;
}
int factorial(int x)
{
    if (x==1 || x== 0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }   
}


// factorial(n)=1x2x3x4x........xn
// factorial=1x2x3x4x.....x{n-1}xn
// factorial=  factorial(n-1)   xn