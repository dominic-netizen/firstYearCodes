#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

int main()
{
    int choice = 0;
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("*********************\n");
    printf("*   MAIN MENU       *\n");
    printf("* 1. ADDITION       *\n");
    printf("* 2. SUBTRACTION    *\n");
    printf("* 3. MULTIPLICATION *\n");
    printf("* 4. DIVISION       *\n");
    printf("* 5. EXIT           *\n");
    printf("*********************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            system("cls");
            printf("Welcome to Addition\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            sum = a + b;

            system("cls");

            printf("The sum is %d", sum);
            getchar();
            break;

        case 2:
            system("cls");
            printf("Welcome to Subtraction\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            difference = a - b;

            system("cls");

            printf("The difference is %d", difference);
            getchar();
            break;

        case 3:
            system("cls");
            printf("Welcome to Multiplication\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            product = a * b;

            system("cls");

            printf("The Product is %d", product);
            getchar();
            break;

        case 4:
            system("cls");
            printf("Welcome to Division\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            if (b != 0)
            {
                quotient = (float)a / b;
                printf("The Quotient is %.2f", quotient);
            }
            else
            {
                system("cls");
                printf("\n\n\nb cannot be 0\n");
            }
            getchar();
            break;

        default:
            printf("Invalid Input");
            break;
        }

        system("cls");
        printf("*********************\n");
        printf("*   MAIN MENU       *\n");
        printf("* 1. ADDITION       *\n");
        printf("* 2. SUBTRACTION    *\n");
        printf("* 3. MULTIPLICATION *\n");
        printf("* 4. DIVISION       *\n");
        printf("* 5. EXIT           *\n");
        printf("*********************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("Thank you! Come Again!");
    getchar();
    return 0;
}