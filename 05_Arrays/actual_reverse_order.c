#include<stdio.h>
 
int main()
{
    int num[5],i;
    for(i=0;i<5;i++)
    {
    printf("Enter an integer:");
    scanf("%d",&num[i]);
    }
    printf("\n The array in actual order:\n ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n The array in reverse order: \n");
    for(i=4;i>=0;i--)
    {
        printf("%d\t",num[i]);
    }
    printf("\n");
    return 0 ;

}
