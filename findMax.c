#include<stdio.h>

int main()
{			
    int a[10],max,i;

    for (i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    max=a[0];
    for (i=0;i<5;i++)
     if(a[i]>max)
        max=a[i];
    
    printf("%d",max); 
    return 0;
}