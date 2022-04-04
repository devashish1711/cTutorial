#include<stdio.h>

int main()
{			
    int age;
    int Vip_pass = 0;
    
    printf("enter your age: ");
    scanf("%d",&age);

    if (age<=70 && age>=18)
    {
        printf("welcome");
    }
    else if ((age<=100 && age>=71) ||(age>=0 && age<=17))
    {
        printf("no\n");
            printf("do you have vip pass: ");
            scanf("%d",&Vip_pass);

        if (Vip_pass==0)
        {
            printf("aaja");
        }
        else
        {
            printf("lund lele");
        }   
    }
    
    return 0;
}