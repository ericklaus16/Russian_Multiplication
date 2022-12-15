#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int numberOfDivisions = 0, factorsSum = 0;

    printf("Russian Multiplication: \n");
    while(a != 0){
        if(a % 2 != 0){
            factorsSum += b;
        }
        printf("%d %d", a, b);
        if(a % 2 != 0){
            printf(" %d\n", b);
        } else {
            printf("\n");
        }

        a /= 2;
        b *= 2;
        numberOfDivisions += 1;
    }

    printf("Sum: %d", factorsSum);

}
