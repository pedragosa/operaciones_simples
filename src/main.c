#include <stdio.h>
#include <conio.h>
#include "rlutil.h"
#include "llibreriaPropia.h"

int main()
{
    SetConsoleOutputCP(65001);
    float num1, num2;
    char op;

    printf("Introdueix el 1er número: ");
    scanf("%f",&num1);
    printf("Introdueix el 2on número: ");
    scanf("%f",&num2);
    printf("Introdueix l'operació desitjada: suma(+) | resta(-) | multiplicació(*) | divisió(/) | màxim(>) | mínim(<): ");
    fflush(stdin);
    scanf("%c",&op);
    mostrarResultat(num1,num2,op);

    getch();
    return 0;
}