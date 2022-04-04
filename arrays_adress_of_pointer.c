#include<stdio.h>
void printArray(int *ptr, int n)
{
    for (int i = 0; i <n ; i++)
    {
        printf("the value of element %d is %d\n", i+1,*(ptr+i));
    }
}
// either do this or
void printArray(int ptr[], int n)
{
    for (int i = 0; i <n ; i++)
    {
        printf("the value of element %d is %d\n", i+1,ptr[i]);
    }
}
// this one all the three will do same work
void printArray(int ptr[], int n)
{
    for (int i = 0; i <n ; i++)
    {
        printf("the value of element %d is %d\n", i+1,*(ptr+i));
    }
    ptr[2]=555; //this will change the actual value of array 3rd element from main as well;
}

int main()
{			
    int arr[]={1,2,45,76,89,91,259,867};
    printArray(arr,8);
    printf("%d",arr[2]);
    return 0;
}