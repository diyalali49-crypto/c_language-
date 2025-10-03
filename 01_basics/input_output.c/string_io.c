#include<stdio.h>
void main()
{
   char name[50];   // for string using character data_type

    printf("Enter your name: ");
    scanf("%49s", name);   // string input 

    printf("Hello, %s!\n", name); 
}