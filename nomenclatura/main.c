#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Punteros
    int *punteroNumero;
    int numero;
    int numeroDos;

    numero = 66;
    numeroDos = &numero;
    punteroNumero = &numero;
    numeroDos = &punteroNumero;
    printf("a- %d\n",numeroDos);//Asignacion de la direccion
    numeroDos = *punteroNumero;

    printf("%d\n",numero);
    printf("b- %d\n",numeroDos);//Asignacion de valor
    printf("%d\n",&numero);
    printf("%p\n",punteroNumero);//Direccion de memoria de mi variable
    printf("%p\n",&punteroNumero);//Direccion de memoria del puntero
    printf("%d",*punteroNumero);//Valor de mi variable

    //*punteroNumero = &numero;
    //*punteroNumero = 55;


    return 0;
}
