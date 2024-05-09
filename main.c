#include <stdio.h>
#include<conio.h>
#include "funciones.h"
int main () {
    int meses;
    float interes, monto, interesesM;
    meses = scanMeses();
    monto = scanMonto();
    interes = scanInt();
    interesesM =  iMensual (interes)/100;
    printf("InteresesM = %f", interesesM);
    para (meses,monto,interesesM);

    getch();
    return 0;
}