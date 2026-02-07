#include<stdio.h>
int main()
{
    int n;
    n=1;
    while(n!= -1)            //-1 is the special value known as sentinel value.
    {
        printf("Enter a numner:");
        scanf("%d",&n);
        printf("you entered %d\n",n);
    }
    printf("End of program........");
    return 0;
}

