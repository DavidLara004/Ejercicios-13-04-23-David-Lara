#include <stdio.h>

int main()
{
  // num es la variable que lee el valor ingresado por el usuario , i la variable que controla las iteraciones en el ciclo For y fact es una variable que guarda la multiplicacion el numero 1 por los numeros anteriores al valor ingresado por el usuario
  int num, i, fact = 1;
  printf("-------------Bienvenido--------- \n");
  printf("Escribe un numero para calcular su factorial\n");
  scanf("%d", &num);
// Se usa ciclo For para que se vaya iterando el numero en orden descendente y la variable fact multiplique el numero de la iteracion por el valor que tenga en ese momento la variable fact (ese numero sale de la anterior iteracion)
  for (i = num; i > 1; i--){
    fact = fact * i;
}
  printf("El factorial de %d es %d\n", num, fact);
  return 0;
}
