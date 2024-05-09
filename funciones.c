#include <stdio.h>
#include"funciones.h"

void instr (){
    printf("--------------- SIMULADOR AHORRO PROGRAMADO --------------- \nPara iniciar el simulador, ingrese los datos en el siguiente orden"); 
    printf("\n1. Meses a ahorrar \n2. Monto mensual \n3. Intereses\n");
}

float scan (int a){
    float num;
    printf("Ingrese el valor %i : ",a);
    scanf("%f",&num);
    while (num<=0)
    {
        printf("Ingrese una cantidad valida : ");
        scanf("%f",&num);
    }
    return num;
}

float iMensual (float interes){
    float iMensual;
    iMensual=interes/12;
    return iMensual;
}

void para (int meses, float monto, float iMensual){
    float montoM, interes,totalI=0;
    montoM=monto;
    interes=montoM*iMensual;
    for (int i = 0; i < meses; i++)
    {
        printf("\n---------------Mes %i---------------\n",i+1);
        totalI+=interes;
        montoM=(montoM+interes);
        printf("Monto ahorrado : %f\n",montoM);
        montoM+=monto;
        printf("Ganancias : %f\n",interes);
        interes=montoM*iMensual;
    }
    printf("\n\nInversion : %f \nAhorro total : %f \nTotal ganancias : %f",meses*monto,montoM-monto,totalI);
}








