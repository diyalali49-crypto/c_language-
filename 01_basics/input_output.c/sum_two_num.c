#include<stdio.h>
void main()
{
   int n,m;
    long sum;
    printf("Enter 1st number:");
    scanf("%d",&n);

    printf("Enter 2nd number:");
    scanf("%d",&m);
    
    sum = n + m ;

    printf("The sum of %d and %d = %ld \n",n,m,sum);
 
}