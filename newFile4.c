#include<stdio.h>

int main()
{			
    int a, b, c;
    float total;
    
    printf("enter the marks of maths : ");
    scanf("%d", &a);
    
    printf("enter the marks of Physics: ");
    scanf("%d", &b);

    printf("enter the marks of chemistry: ");
    scanf("%d", &c);
    
    total = a + b + c/3;

    if ((total<40) || a<33 || b<33|| c<33)
    {
        printf("he is fail %f \n", total);
    }   
    else
    {
        printf("he is pass %f \n", total);
    }
    return 0;
}