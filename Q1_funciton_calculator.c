#include<stdio.h>
#include<math.h> 

int Divide(int a,int b);
int Multiply(int a,int b);
int addition(int a,int b);
int Substract(int a,int b);
int power(int a, int b);

int main()
{			
    int a, b, choice, result;
    printf("good morning! \n");
    printf("Enter 1 for Divide.\nEnter 2 for multiply.\nEnter 3 for addition.\nEnter 4 for substraction.\nEnter 5 for powering the number: \n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=Divide(a,b);
    }
    else if (choice==2)
    {
        result=Multiply(a,b);
    }
    else if (choice==3)
    {
        result=addition(a,b);
    }
    else if(choice==4)
    {
        result=Substract(a,b);
    }
    else if (choice==5)
    {
        result=power(a,b);
    }
    else
    {
        printf("lawde 1-4 k bich m enter kr!\n");
    }
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
printf("%d",result);
return 0;
}

int Divide(int a,int b)
{
    if (a>b)
    {
        int result= a/b; 
        return result;
    }
    else
    {
        int result = b/a;
        return result;
    }
}
int Multiply(int a,int b)
{

    int result=a*b;
    return result;
}
int addition(int a,int b)
{
    int result= a+b;
    return result;
}

int Substract(int a,int b)
{
    if (a>b)
    {
        int result = a-b;
        return result;
    }
    else
    {
        int result =b-a;
        return result;
    }
}

int power(int a, int b)
{
    int result= pow(a,b);
    return result;
}
