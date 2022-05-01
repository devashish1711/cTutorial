#include<stdio.h>

int main()
{			
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 2*(i+1);
    }
     for (int i = 0; i < 10; i++)
    {
        printf("2 X %d = %d \n", i+1,mul[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        mul[i] = 7*(i+1);
    }
     for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d \n", i+1,mul[i]);
    }
    printf("\n");


    for (int i = 0; i < 10; i++)
    {
        mul[i] = 9*(i+1);
    }
     for (int i = 0; i < 10; i++)
    {
        printf("9 X %d = %d \n", i+1,mul[i]);
    }
printf("\n");
    
return 0;
}