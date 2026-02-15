#include<stdio.h>
 int main()
 {
    int arr[10],i,min;

    for(i=0;i<10;i++)
    {
        printf("Enter a positive no:");
        scanf("%d",&arr[i]);
    }
    min=arr[0];

    for(i=0;i<10;i++)
    {
        if(min>i)
        {
         min=arr[i];
        }
    }

    printf("Minimum value is %d\n",min);
    return 0 ;
 }