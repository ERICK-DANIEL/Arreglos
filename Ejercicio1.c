#include <stdio.h>

int main() {
    float numeros[4];
    float suma;
    float media = 0;

    for (int i = 0; i < 4; i++){
        printf("Ingresa el numero %d: ", i+1);
        scanf("%f", &numeros[i]);
        suma += numeros[i];
    }

    media = suma / 4;

    printf("\nLa media de: ");

    for (int i = 0; i < 4; i++){
        printf("\n%0.1f", numeros[i]);
    }

    printf("\nes: %0.3f", media);

    return 0;
}
