// Name: dominic ocarol
// Course: BSIT
//	Year: 1
//	Subject: IT101A
//	Create a c program that will ask the user to input 10 numbers and get the following
// A.Sum of all the even numbers
// B.Product of all odd numbers
// C.Average of all inputted number

#include <stdio.h>

void GetNumbers(int numbers[]);
int CalculateSumEven(int numbers[]);
int CalculateProductOdd(int numbers[]);
float CalculateAverage(int numbers[]);

int main()
{
    int numbers[10];

    GetNumbers(numbers);

    int sum_even = CalculateSumEven(numbers);
    int product_odd = CalculateProductOdd(numbers);
    float average = CalculateAverage(numbers);

    printf("Sum of all the even numbers is %d\n", sum_even);
    printf("Product of all odd numbers is %d\n", product_odd);
    printf("Average of all inputted numbers is %.2f\n", average);

    return 0;
}

void GetNumbers(int numbers[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int CalculateSumEven(int numbers[])
{
    int sum_even = 0;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum_even += numbers[i];
        }
    }
    return sum_even;
}

int CalculateProductOdd(int numbers[])
{
    int product_odd = 1;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            product_odd *= numbers[i];
        }
    }
    return product_odd;
}

float CalculateAverage(int numbers[])
{
    int sum_all = 0;
    for (int i = 0; i < 10; i++)
    {
        sum_all += numbers[i];
    }
    return (float)sum_all / 10;
}