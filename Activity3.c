#include <stdio.h>

int main(){
    int num;
    printf("Enter a number(-100 to 100): "); // Enter number from -100 to 100
    scanf("%d",&num);
    
    if (num < -100 || num > 100) {
        printf("Out of Bounds");
       }  else if (num == 0){
    printf("0 is neither even nor odd"); // 0 is excluded
    } else {
        if(num % 2 == 0) {
        printf("the number %d is EVEN", num); // If the number is even
        } else {
        printf("the number %d is ODD", num); // If the number is odd
        }
    }
   return 0;
}