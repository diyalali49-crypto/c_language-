#include<stdio.h>
 int main()
 {
    int arr[10],i,max;

    for(i=0;i<10;i++)
    {
        printf("Enter a value :");
        scanf("%d",&arr[i]);
    }
    max=arr[0];

    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
         max=arr[i];
        }
    }

    printf("Maximum value is %d\n",max);
    return 0 ;
 }