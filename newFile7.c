#include<stdio.h>

int main()
{			
    char ch;
    int a;
    
    printf("enter the character: " );
    scanf("%c",&ch);
    if (ch<=90 && ch>=65)
    {
        printf("it is a upper case letter: %c",ch);
    }
    else if(ch<=122 && ch>=97 )
    {
        printf("it si a lower case: %c",ch);
    }
    else
    {
        printf("you entered the wrong choice: ");
    }

    printf("\nenter the number: ");
    scanf("%d",&a);

    if (a<=57 && a>=48)
    {
        printf("the number is: %d",a);
    }
    else
    {
        printf("you enter the wrong choice: %d",a);
    }
    printf("\nthe letter you enter is %c and the number you enter is %d",ch,a);
    return 0;
}