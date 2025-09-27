#include<stdio.h>
#include<stdbool.h>     // for boolean 
void main()
{
   int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Relational operations
    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isGreater = (a > b);
    bool isLess = (a < b);
    bool isGreaterOrEqual = (a >= b);
    bool isLessOrEqual = (a <= b);

    printf("\nResults:\n");
    printf("a == b : %d\n", isEqual);
    printf("a != b : %d\n", isNotEqual);
    printf("a > b  : %d\n", isGreater);
    printf("a < b  : %d\n", isLess);
    printf("a >= b : %d\n", isGreaterOrEqual);
    printf("a <= b : %d\n", isLessOrEqual);
 
}