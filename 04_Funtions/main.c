#include <stdio.h>
int add(int a.int b);
void cube(int num);

void main()


{
    add(2.3);
    cube(5);
}

int add(int a,int b)
{
    return a+b;

}
 void cube(int num)
 {
    return num*num*num;
 }
 // gcc 03_loops/sentinel-controlled-loop.c -o sentinel-controlled-loop.exe  && ./sentinel-controlled-loop.exe