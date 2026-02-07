#include <stdio.h>
int add(int a,int b);
int cube(int num);

void main()
{  
    int x,y;
       x= add(2,3);
       y= cube(5);
       printf("cube is %d\n",y);
        printf("Adding numbers is %d\n",x);
}

 int add(int a,int b)
    {
           return a+b;
     }

 int cube(int num)
 {
    return num*num*num;
  }

 // gcc 03_loops/sentinel-controlled-loop.c -o sentinel-controlled-loop.exe  && ./sentinel-controlled-loop.exe