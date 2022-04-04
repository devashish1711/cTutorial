//create  an array of 10 numbers. verify using pointer arithmetic that (ptr + 2) points to the third element where ptr is a pointer pointing to the first 
// element of array.
#include<stdio.h>

int main()
{			
    int arr[10],i;
    int *ptr = &arr[0];  // or we can use ptr=arr;
    ptr=ptr+2;
    if (ptr==&arr[2])
    {
        printf("these point to the same location in memory");
    }
    else
    {
        printf("these point do not point to same location in memory");
    }
    
    return 0;
}
