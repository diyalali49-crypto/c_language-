#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Use of Conditional (ternary) operator 
    (num % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

    return 0;
}
