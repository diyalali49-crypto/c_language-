#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 33) {
        printf("You passed the exam.\n");

        if (marks >= 80) {
            printf("You got distinction!\n");
        }

        if (marks >= 60 && marks < 80) {
            printf("You got first division.\n");
        }

        if (marks >= 33 && marks < 60) {
            printf("You got second division.\n");
        }
    }

    if (marks < 33) {
        printf("You failed the exam.\n");
    }

    return 0;
}
