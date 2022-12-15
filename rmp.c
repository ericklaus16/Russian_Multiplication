#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int aBackup = a, bBackup = b;
    int numberOfDivisions = 0, numberOfMultiplications = 0, portionSum = 0;

    while(aBackup != 0){
        aBackup /= 2;
        numberOfDivisions += 1;
    }
    aBackup = a;
    int vetorA[numberOfDivisions], vetorB[numberOfDivisions], parcelas[numberOfDivisions];
    vetorA[0] = a;
    vetorB[0] = b;

    while(numberOfMultiplications != numberOfDivisions){
        if(aBackup % 2 != 0){
            portionSum += bBackup;
        }
        if(aBackup % 2 != 0){
            parcelas[numberOfMultiplications] = bBackup;
        }

        aBackup /= 2;
        bBackup *= 2;
        numberOfMultiplications += 1;
        vetorA[numberOfMultiplications] = aBackup;
        vetorB[numberOfMultiplications] = bBackup;
    }

    printf("Russian Multiplication: \n");
    for(int i = 0; i < numberOfDivisions; i++){
        printf("%d %d", vetorA[i], vetorB[i]);

        if(vetorA[i] % 2 != 0){
            printf(" %d\n", parcelas[i]);
        } else {
            printf("\n");
        }
    }
    printf("Sum: %d", portionSum);
}
