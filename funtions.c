#include <stdio.h>


int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
void Division(int a, int b);
int GetNumber();

void main() {
 int numberOne = 0, numberTwo = 0;

 numberOne = GetNumber();
 numberTwo = GetNumber();

 printf("\n The sum of %d and %d is %d", numberOne, numberTwo,
Addition(numberOne, numberTwo));
 printf("\n The difference of %d and %d is %d", numberOne, numberTwo,
Subtraction(numberOne, numberTwo));
 printf("\n The product of %d and %d is %d", numberOne, numberTwo,
Multiplication(numberOne, numberTwo));

 Division(numberOne, numberTwo);

}
int Addition(int a, int b)
{
 return a + b;
}
int Subtraction(int a, int b)
{
 return a - b;
}
int Multiplication(int a, int b)
{
 return a * b;
}
void Division(int a, int b)
{
 float quotient = 0;
 if(b == 0)
 {
 printf("\n Syntax Error!");
 b = GetNumber();
 }


 printf("\n The quotient of %d and %d is %.2f", a, b, ((float)a / b));
}
int GetNumber()
{
 int i = 0;

 printf("\n Enter number: ");
 scanf("%d", &i);

 return i;
}