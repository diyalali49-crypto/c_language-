#include<stdio.h>

void main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Logical AND example
    if (age >= 18 && age <= 60) {
        printf("You are an adult (between 18 AND 60)\n");
    }

    // Logical OR example
    else if (age < 18 || age > 60) {
        printf("You are either younger than 18 OR older than 60\n");
    }

    // Logical NOT example
  if (!(age == 25)) {
        printf("Your age is NOT equal to 25\n");
    }
   else 
   printf("invalid input");
 
}
