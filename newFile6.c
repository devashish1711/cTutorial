#include<stdio.h>

int main()
{			
    int a,b,c,d;
    
    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);
    
    printf("Enter the third number: ");
    scanf("%d",&c);
    
    printf("Enter the fourth number: ");
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("First number is greatest of all: %d",a);
            }
            else
            {
                printf("Fourth number is greatest %d",d);
            }
        }
    }
    else if (b>c)
    {
        if (b>d)
        {
            printf("Second number is greatest of all %d",b);
        }
        else
        {
            printf("Fourth number is greatest of all %d",d);
        }
    }
    else if (c>d)
    {
        printf("Third number is greatest of all: %d",c);
    }
    else
    {
        printf("Fourth number is greatest of all: %d",d);
    }
    return 0;
}