#include<stdio.h>
//checking number is even or odd using function call in condition
 int IsEven(int n)
 {
    if (n%2==0)
       return 1;
    else
       return 0;
 }
  int main()
 {  int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(IsEven(num))
    printf("%d is a Even number\n",num);
    else
    printf("%d is odd number\n",num);
return 0;
 }