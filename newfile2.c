#include<stdio.h>

int main()
{			
    int rating;
    printf("Enter your rating between 1 to 5 : ");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("hey1 \n");
         break;
    case 2:
        printf("hey2 \n");
         break;
    case 3:
        printf("hey3 \n");
         break;
    case 4:
        printf("hey4 \n");
         break;
    case 5:
        printf("hey5 \n");
         break;
    case 6:
        printf("hey6 \n");
         break;
    default:
        printf("hey7 \n");
        break;
    
    }
    return 0;
}