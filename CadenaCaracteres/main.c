#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11] = "MiNombre";
    char *apellido = "MiApellido";
    char *puntero;
    puntero = nombre;
    printf("\n%s",nombre);
    printf("\n%s",apellido);
    //printf("\n%s",*puntero);
    printf("\n%s",puntero);
    int i;
    for(i=0;i<11;i++)
    {
      if(*(apellido+i)!='\0')
      {
        printf("\n%c",*(apellido+i));
      }
    }
    for(i=0;*(apellido+i)!='\0';i++)
    {

      printf("\n%c",*(apellido+i));

    }
    return 0;
}
