#include<stdio.h>

int main() {

    print("Multipilacation tabale\n");
    
    int n = 1, m;

    do {
        m = 1;
        do {
            printf("%2d * %2d = %3d\t", n, m, n * m);
            m++;
        } while (m <= 10);
        printf("\n");
        n++;
    } while (n <= 10);

    return 0;
}
