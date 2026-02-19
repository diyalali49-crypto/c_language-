#include <stdio.h>

int main() {
    int marks[5];
    int i;
    int sum = 0;
    int highest, lowest;

    printf("Enter marks of 5 students:\n");

    // Input marks
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    highest = lowest = marks[0];

    // Calculate sum, highest and lowest
    for(i = 0; i < 5; i++) {
        sum += marks[i];

        if(marks[i] > highest) {
            highest = marks[i];
        }

        if(marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    printf("\nTotal Marks = %d", sum);
    printf("\nAverage Marks = %.2f", sum / 5.0);
    printf("\nHighest Marks = %d", highest);
    printf("\nLowest Marks = %d", lowest);

    return 0;
}
