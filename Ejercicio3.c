/* A partir del programa propuesto, que almacenaba en una tabla el n�mero
de d�as que tiene cada mes, crear otro que pida al usuario que le indique
la fecha, detallando el d�a (1 al 31) y el mes (1=enero, 12=diciembre), como
respuesta muestre en pantalla el n�mero de d�as que quedan hasta final de a�o*/

#include <stdio.h>

int main(){
    int dia;
    int diaDelMes;
    int diaFinal = 0;
    int mes;
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Ingesa el dia y el mes: ");
    scanf("%d %d", &dia, &mes);

    diaDelMes = dias[mes - 1] - dia;

    for (int i = mes; i < 12; i++){
        diaFinal = diaFinal + dias[i];
    }

    diaFinal = diaFinal + diaDelMes;

    printf("\nFaltan %d dias para final de ano", diaFinal);
    return 0;

}
