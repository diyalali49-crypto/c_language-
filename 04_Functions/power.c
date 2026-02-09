#include<stdio.h>

int power(int base , int exp)
{
    int res =1;
    for (int i=1;i<=exp;i++)
    {
        res = res*base;

    }
return res;

}

int main()
 {
   int b , e;
   printf("Enter base:");
   scanf("%d",&b);
   printf("Enter expression:");
   scanf("%d",&e);

   printf("%d raise to power %d is %d\n",b,e,power(b,e));

   return b+e;
 }