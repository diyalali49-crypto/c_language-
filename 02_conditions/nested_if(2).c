#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
                printf("Max is %d", a);
            else
                printf("Max is %d", d);
        }
        else   // a <= c
        {
            if(c > d)
                printf("Max is %d", c);
            else
                printf("Max is %d", d);
        }
    }
    else   // b >= a
    {
        if(b > c)
        {
            if(b > d)
                printf("Max is %d", b);
            else
                printf("Max is %d", d);
        }
        else  // c >= b
        {
            if(c > d)
                printf("Max is %d", c);
            else
                printf("Max is %d", d);
        }
    }

    return 0;
}
