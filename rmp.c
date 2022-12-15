#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int aBackup = a, bBackup = b;
    int numberOfDivisions = 0, factorsSum = 0;

    printf("Russian Multiplication: \n");
    while(aBackup != 0){
        if(aBackup % 2 != 0){
            factorsSum += bBackup;
        }
        printf("%d %d", aBackup, bBackup);
        if(aBackup % 2 != 0){
            printf(" %d\n", bBackup);
        } else {
            printf("\n");
        }

        aBackup /= 2;
        bBackup *= 2;
        numberOfDivisions += 1;
    }

    printf("Sum: %d", factorsSum);

}
