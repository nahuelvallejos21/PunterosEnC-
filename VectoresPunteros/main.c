#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero,int cant);
void mostrarMayor(int *puntero,int cant);

int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar = 333;
    puntero = numeros;
    numeros[0] = 9;
    numeros[1] = 99;
    numeros[2] = 999;
    printf("\npuntero :%d",*(puntero-2));
    printf("\npuntero :%d",*(puntero+1));
    printf("\npuntero :%d",*(puntero+2));
    printf("\npuntero :%d",*(puntero+3));
    printf("\npuntero :%d",*(puntero+4));
    printf("\nnumero :%d",*numeros);
    mostrar(numeros,3);
    mostrarMayor(numeros,3);


    return 0;
}
void mostrar(int *puntero,int cant)
{
  int i;
  for(i=0;i<cant;i++)
  {
    printf("\nnumero :%d",*(puntero+i));
  }
}
void mostrarMayor(int *puntero,int cant)
{
  int i;
  int max;
  int flag =0;
  for(i=0;i<cant;i++)
  {
    if(*(puntero+i)>max || flag==0)
    {
      max = *(puntero+i);
      flag = 1;
    }
  }

  printf("\nNum max: %d",max);

}
