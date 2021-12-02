#include <stdio.h>
#include "llibreriaPropia.h"

float suma(float num1, float num2){
    return num1 + num2;
}

float resta(float num1, float num2){
    return num1 - num2;
}

float multiplica(float num1, float num2){
    return num1 * num2;
}

float divideix(float num1, float num2){
    return num1 / num2;
}
float maxim(float num1, float num2){
    int max;
    if (num1 > num2){
        max=num1;
    }else max=num2;
    return max;
}
float minim(float num1, float num2){
    int min;
    if (num1 < num2){
        min=num1;
    }else min=num2;
    return min;
}

void mostrarResultat(float num1, float num2, char tipusOp){
    switch(tipusOp){
        case SUM: printf("El resultat de sumar %0.2f + %0.2f és %0.2f\n",num1,num2,suma(num1,num2)); 
                  break;
        case RES: printf("El resultat de restar %0.2f - %0.2f és %0.2f\n",num1,num2,resta(num1,num2)); 
                  break;
        case MUL: printf("El resultat de multiplicar %0.2f * %0.2f és %0.2f\n",num1,num2,multiplica(num1,num2)); 
                  break;
        case DIV: printf("El resultat de dividir %0.2f / %0.2f és %0.2f\n",num1,num2,divideix(num1,num2)); 
                  break;
        case MAX: printf("El resultat del màxim %0.2f entre %0.2f és %0.2f\n",num1,num2,maxim(num1,num2)); 
                  break;
        case MIN: printf("El resultat del mínim %0.2f entre %0.2f és %0.2f\n",num1,num2,minim(num1,num2));
                  break;
        default: printf("No existeix el tipus d'operació indicat\n");
    }
}