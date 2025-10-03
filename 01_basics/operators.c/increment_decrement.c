#include<stdio.h>
void main()
{
    int a ,b ,x ,y;
    a=b=x=y=0;

   printf("Increment operator (++)\n");

    a++;    //postfix increment operator
    b=a;

    ++x;    //prefix increment operator
    y=x;

    printf("a=%d\nb=%d\n",a,b);
    printf("x=%d\ny=%d\n",x,y);
    int m ,n ,p ,q;
    m=n=p=q=0;
 
    printf("Decrement operator (--)\n");

    m--;    // postfix decrement operator
    n=m;

    --p;    //prefix decrement operator
    q=p;

    printf("m=%d\nn=%d\n",m,n);
    printf("p=%d\nq=%d\n",p,q);

}