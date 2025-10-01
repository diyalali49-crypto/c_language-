#include<stdio.h>
void main()
{
    int a , b , sum;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    sum = a+b;         // = (assignment operator)
    printf("The sum of a and b = %d\n",sum);
    // compound assignment oprators
    a+=5;
    b+=5;
    printf("Value of a after a+=5 =%d & b after b+=5 =%d\n",a,b);
    a-=5;
    b-=5;
    printf("Value of a after a-=5 =%d & b after b-=5 =%d\n",a,b);
    a*=5;
    b*=5;
    printf("Value of a after a*=5 =%d & b after b*=5 =%d\n",a,b);
    a/=5;
    b/=5;
    printf("Value of a after a/=5 =%d & b after b/=5 =%d\n",a,b);
}