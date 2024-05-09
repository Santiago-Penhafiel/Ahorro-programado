#include <stdio.h>
#include"funciones.h"

int scanMeses (){
    int meses;
    printf("Ingrese los meses a programar el ahorro\n");
    scanf("%i",&meses);
    while (meses<=0)
    {
        printf("Ingrese un numero valido\n");
        scanf("%i",&meses);
    }
    
    return meses; 
}

float scanMonto (){
    float monto;
    printf("Ingrese el monto mensual a ahorrar\n");
    scanf("%f",&monto);
    while(monto<=0){
        printf("Ingrese un valor valido\n");
        scanf("%f",&monto);
    }
    return monto;
}

float scanInt (){
    float interes;
    printf("Ingrese el interes anual\n");
    while(interes<=0){
        printf("Ingrese un valor valido\n");
        scanf("%f",&interes);
    }
    scanf("%f",&interes);
    return interes;
}

float iMensual (float interes){
    float iMensual;
    iMensual=interes/12;
    return iMensual;
}

void para (int meses, float monto, float iMensual){
    float montoM, interes;
    montoM=monto;
    interes=montoM*iMensual;
    printf("%f \n",interes);
    for (int i = 0; i < meses; i++)
    {
        montoM=(montoM+interes);
        printf("El monto ahorrado en el mes %i es de: %f\n",i+1,montoM);
        montoM+=monto;
        interes=montoM*iMensual;
    }
}








