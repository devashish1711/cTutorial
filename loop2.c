#include<stdio.h>

int main()
{			
    char name;
    int a;
    printf("Enter you name: ");
    scanf("%c",&name);

    printf("Enter you class: ");
    scanf("%d",&a);
    while(a<=12)
    {
        if(a>=1 && a<=6)
        {
            printf("you are junior");
            break;
        }
        else if(a>=6 && a<=10)
        {
            printf("you are under senior so you are sub senior! right now");
            break;
        }
        else
        {
            printf("you are senior ");
        }
        a++;
    }
    return 0;
}