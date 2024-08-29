#include <stdio.h>

int main()
{
    int A = 0, B = 0; 

    printf("Enter number for A:"); //for A
    scanf("%d", &A);
    
    printf("Enter number for B:"); //for B
    scanf("%d", &B);
   
    printf("A: %d B: %d\n", A, B); //Display the entered values of A & B


    int sum = A + B; // Calculation for the sum of A and B
    printf("The sum of A and B is %d", sum); // Display the sum of A and B
    return 0;
}