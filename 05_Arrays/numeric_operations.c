#include<stdio.h>
 int main()
 {   int i;
    const int size=5;
    int numbers[size];
    int squares[size];
    int cubes[size];
    int sums[size];
    // Store he no in array
    for(int i=0;i<size;i++)
    {
        numbers[i] =i;
        squares[i]=i*i;
        cubes[i]=i*i*i;
        sums[i]=numbers[i] + squares[i] + cubes[i];
    } 
    // Output the sums array and add up  all the sums 
    int total=0;
    printf("Numbers:\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",numbers[i]);
    }
    printf("\n");

    printf("Squares:\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",squares[i]);
    }
    printf("\n");

   printf("Cubes:\t");
   printf("\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",cubes[i]);
    }
    printf("\n");

    printf("Sums:\t");
    printf("\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t",sums[i]);
        total=total + sums[i];
    }
    printf("\n");

    
    printf("Grand total is : %d\n",total);

}