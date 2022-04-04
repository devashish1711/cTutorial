#include<stdio.h>

int main()
{		
    int a[10],i,n;	
    int prev =0;
    int count;

    printf("eneter size of array");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[prev])
        a[++prev]=a[i];
        count = prev+1;
    }
    for(i=0;i<count;i++)
    printf("%d",a[i]);
    return 0;
}