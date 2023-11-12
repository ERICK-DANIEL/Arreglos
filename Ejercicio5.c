#include <stdio.h>

int main(){
    int numeros[10];
    int suma = 0;
    float media;
    int mayMedia[10];

    for (int i = 0; i < 10; i++){
            printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        suma = suma + numeros[i];
    }

    media = (float)suma / 10;

    printf("\nLa media es: %0.2f ", media);
    printf("\nLos numeros por encima de la media son: \n");


    for (int i = 0; i < 10; i++){
        if (media < numeros[i]){
            mayMedia[i] = numeros[i];
            printf("%d ", mayMedia[i]);
        }
    }
    return 0;
}
