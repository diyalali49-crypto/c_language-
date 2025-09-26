#include<stdio.h>
void main()
{

                  //integer

    int i = 20;
    short s= 360;
    long l = 8000;
    long long ll= 2154215362212;

    unsigned short us = 65000;      
    unsigned int ui = 4294967295U;   
    unsigned long ul = 4294967295UL;
    unsigned long long ull = 18446744073709551615ULL; 

    printf("short = %d\n",s);
    printf("int = %d\n",i);
    printf("long = %ld\n",l);
    printf("long long = %lld\n",ll);

    printf("unsigned short = %u\n",us);
    printf("unsigned int = %u\n",ui);
    printf("unsigned long = %lu\n",ul);
    printf("unsigned long long = %llu\n",ull);

                  //float

    float f = 3.14159f;            
    double d = 3.141945579;    
    long double ld = 3.14189793238L; 

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);              

                   //character 
                   
     char letter = 'A';     
    char digit = '5';      
    char symbol = '#';     

    printf("%c %c %c\n", letter, digit, symbol);

}