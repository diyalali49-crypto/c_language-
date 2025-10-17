#include<stdio.h>
void main()
{
    float area, radius,circumference;
    int choice;
    printf("Enter radius:");
    scanf("%f,",&radius);
    printf("Enter 1 for area and 2 for circumference:");
    scanf("%d",&choice);
    if(choice==1)
    {
        area = radius*radius*3.1415;
        printf("Circumference: %f ", circumference);

    }
    else if(choice==2)
    {
        circumference = 2.0*3.1415*radius;
        printf("Circumference : %f ", circumference);

    }
    else 
    printf("Invalid choice");
}