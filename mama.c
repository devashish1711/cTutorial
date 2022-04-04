#include<stdio.h>

int main()
{			
    int  age;
    int Vip_pass=0;
    
    printf("Enter th age: ");
    scanf("%d",&age);
    if (age <=70 && age >=18)
    {
        printf("welcome! To the world of adventure and joy called devland😂✌️");
    }
    else
    {
        printf("sorry u r underage \n");
            printf("you have vip pass: ");
            scanf("%d",&Vip_pass);
            if (Vip_pass==0)
            {
                printf("As per age u are under-age, but we accept you in devland");
            }
            else 
            {
                printf("Sorry, you are not allow to enter the club");
            }
    }
    return 0;
}