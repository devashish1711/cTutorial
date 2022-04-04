#include<stdio.h>

int main()
{			
    int i=1,a;
    printf("Enter the end value: ");
    scanf("%d",&a);
    do
    {
        printf("The value of i: %d\n",i);
        if(i==a)
        {
            printf("The loop ended! THANK YOU 😂");
            break;
        }
        i++;
    }while(i<100);
    return 0;
}