#include<stdio.h>

int main()
{			
    int a=4;
    printf("%d,%d,%d",a, ++a,a++);
    return 0;
}
//                    <-----<--<---this way
// the compiler will run right to left is called order of argument;