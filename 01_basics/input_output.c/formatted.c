#include<stdio.h>
void main()
{
    int age = 20;
    float pi = 3.14159;
    char grade = 'A';
    char name[] = "Ali";

            // formatted output examples

    printf("Name: %s\n", name);           // string
    printf("Age: %d years\n", age);       // integer
    printf("Pi (2 decimals): %.2f\n", pi); // float with 2 decimal places
    printf("Grade: %c\n", grade);         // character

}