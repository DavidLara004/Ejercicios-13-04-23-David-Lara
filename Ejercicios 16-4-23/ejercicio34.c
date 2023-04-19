#include <stdio.h>
int main()
{
    // Variable i utilizada para ciclo For que controla las iteraciones.
    int i;
    printf("-------------Bienvenido--------- \n");
    printf("Los numeros del 1 al 10 en orden descendente son:\n");
    // Se utiliza ciclo For para que vaya imprimiendo el numero menor al anterior, hasta llegar al 1.
    for (i=10; i>=1; i--){
        printf( "%d ", i); 
  }
    return 0;
}
