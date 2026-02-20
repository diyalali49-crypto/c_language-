#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, average;

    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("\n----- Result -----\n");
    printf("Name: %s", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}