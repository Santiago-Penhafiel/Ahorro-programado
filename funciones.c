#include <stdio.h>
#include"funciones.h"

int scanMeses (){
    int meses;
    printf("Ingrese los meses a programar el ahorro\n");
    scanf("%i",&meses);
    return meses; 
}

float scanMonto (){
    float monto;
    printf("Ingrese el monto mensual a ahorrar\n");
    scanf("%f",&monto);
    return monto;
}

float scanInt (){
    float interes;
    printf("Ingrese el interes anual\n");
    scanf("%f",&interes);
    return interes;
}

float iMensual (float interes){
    float iMensual;
    iMensual=interes/12;
    return iMensual;
}

void para (int meses, float monto, float iMensual){
    float montoT=0;
    for (int i = 0; i < meses; i++)
    {
        monto=monto+(monto*iMensual);
        montoT+=monto;
         printf("El monto ahorrado en el mes %i es de: %f\n",i+1, montoT);
    }
    printf("El monto total ahorrado en %i meses es de : %f\n", meses, montoT);
}







