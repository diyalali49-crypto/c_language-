#include<stdio.h>
int main()
{
    printf ("Enter two numbers for adding:");
    scanf("%d%d",a,b);
    add(int a,int b);
    printf("Enter two numbers for subtracting");
    scanf("%d%d",a,b);
    subtract(int a, int b);
    printf("Enter two numbers for multiplying:");
    scanf("%d%d",a,b);
    multiply(int a ,int b);
    printf("Enter two numbers for dividing:");
    scanf("%d%d",a,b);
    divide(int a , int b);
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
    return a/b;

}