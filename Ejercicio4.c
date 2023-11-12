#include <stdio.h>

int main(){
    int numeros[10];

    for (int i = 0; i < 10; i++){
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 9; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }

    return 0;
}
