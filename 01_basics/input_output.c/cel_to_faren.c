#include<stdio.h>
void main()
{
    float cel,faren;

    printf("Enter tempreture in celcius:");
    scanf("%f",&cel);                          //take input in celcius and give output in farenheit 

    faren = 9.0/5.0*cel+32;
   
    printf("Tempreture in farenheit is %5.2f\n",faren);
    

}