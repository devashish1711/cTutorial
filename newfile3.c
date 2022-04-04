#include<stdio.h>

int main()
{			
    char name;
    float marks;
     
    printf("enter the name of child: ");
    scanf("%c",&name);

    printf("Enter the marks of child: ");
    scanf("%f",&marks);
    if (marks<=100 && marks>=91) 

    {
        printf("A");
    }
    else if(marks<=90 && marks>=81)
    {
        printf("B");
    }
    else if(marks<=80 && marks>=71)
    {
        printf("C");
    }
    else if(marks<=70 && marks>=61)
    {
        printf("D");
    }
    else if(marks<=60 && marks>=51)
    {
        printf("E");
    }
    else if(marks<=50 && marks>=36)
    {
        printf("EF");
    }
    else
    {
        printf("F");
    }
    return 0;
}