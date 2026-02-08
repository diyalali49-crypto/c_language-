#include<stdio.h>

int add(int a,int b);
int subtract(int a, int b);
int multiply(int a ,int b);
int divide(int a , int b);

int main()
{   int n,m;
    printf("Enter two numbers for adding is :\n"); 
      scanf("%d%d",&n,&m);
      printf("Addition is: %d\n",add(n,m));
  
    printf("Enter two numbers for subtracting is :\n");
    scanf("%d%d",&n,&m);
    printf("Subtraction is: %d\n",subtract(n,m));

    printf("Enter two numbers for multiplying is:\n");
    scanf("%d%d",&n,&m);
    printf("Multiplication is: %d\n",multiply(n,m));

    printf("Enter two numbers for dividing is : \n");
    scanf("%d%d",&n,&m);
    if(m != 0)
        printf("Division = %d\n", divide(n,m));
    else
        printf("Error: Division by zero not allowed\n");

    return 0;

}
int add(int a, int b)
{
    return a +b;
}
int subtract(int a ,int b)
{ 
    return a - b;
}
int multiply(int a , int b)
{
    return a*b;
}
int divide(int a , int b)
{
    return a / b;

}