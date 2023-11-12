#include <stdio.h>

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Ingresa al numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    int k;
    int j;
    int aux;

    for (k = 0; k < 10; k++){
        for (j = k+1; j < 10; j++){
            if (numeros[k] < numeros[j]){
                aux = numeros[j];
                numeros[j] = numeros[k];
                numeros[k] = aux;
            }
        }
    }

        printf("\nEl numero mayor es: %d ", numeros[0]);

    return 0;
}
