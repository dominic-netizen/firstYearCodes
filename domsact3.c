#include <stdio.h>
int main(){
int number;
printf("Enter an integer between -100 and 100:");
scanf("%d",&number);

if (number < -100 || number > 100){
printf("out of bounds\n");
}
else if (number== 0){
    printf("0 is neither even or odd");
}
else{
    if (number %2 == 0){
        printf("enter number %d is even" , number);
    }
    else{
        printf("number %d is odd", number);
    }
}
return 0;
}