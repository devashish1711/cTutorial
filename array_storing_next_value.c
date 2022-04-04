#include<stdio.h>

int main()
{			
    int marks[4];
    int *ptr;
    ptr = &marks[0]; // or we can use (ptr = marks;)
    for(int i=0; i<4; i++)
    {
        printf("enter the value of marks for student %d :", i+1);
        scanf("%d",ptr);  //here we are getting the adress of ptr not the value of ptr:
        ptr++;
    }
    for(int i=0; i<4; i++)
    {
        printf("the value of marks for studnets %d is %d \n", i+1 ,marks[i]);
    }
    return 0;
}
