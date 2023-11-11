// Un programa que pida al usuario 5 números reales y luego los muestre en el orden contrario al que se introdujeron

#include <stdio.h>

int main() {
    float numeros[5];

    for (int i = 0; i < 5; i++){
        printf("Introcuce el numero %d: ", i);
        scanf("%f", &numeros[i]);
    }

    for (int i = 4; i >= 0; i--){
        printf("\n%0.2f", numeros[i]);
    }

    return 0;
}
