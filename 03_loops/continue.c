#include<stdio.h>


void main()
{
    int x ,num;
    for (x=1;x<=5;x++)
    {
        printf("enter a no:");
        scanf("%d",&num);
        if(num<=0)
        {
            continue;
        printf("you enter %d\n",num);
        }
    }

}