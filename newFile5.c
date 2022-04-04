#include<stdio.h>

int main()
{			
    float income,tax = 0;

    printf("enter your income: ");
    scanf("%f",&income);

    if (income<=500000 && income>=250000)
    {
        tax += 0.05 * (income - 250000);
    }
    else if (income<=1000000 && income>=500000)
    {
        tax += 0.2 * (income-500000);
    }
    else if (income>=1000000)
    {
        tax += 0.3 * (income-1000000);
    }
    printf("your tax is: %f", tax);
    
    return 0;
}