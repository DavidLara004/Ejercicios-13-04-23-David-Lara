#include<stdio.h> 

int main(){
 // num es la variable destinada al dato ingresado, residuo es la variable destinada al valor que sale del residuo del digito dividido por 2, par es la variable que guarda todos lo numeros pares, digito es la variable que guarda el residuo de la division entre el valor ingresado y 10 e imput es la variable que guarda una copia del valor ingresado y esto permite cambios en la variable num.
int num,residuo,par=0,digito,input;
printf("-------------Bienvenido--------- \n");
printf("Ingrese un numero entero: ");
scanf("%d",&num);
input = num;
 //Se utiliza el ciclo while para que se siga repitiendo el proceso mientras se cumpla la condicional. Esto hará posible que se itere tantas veces encuentre un dígito par.
while(num>0){
  // Se saca el residuo de la division del valor ingresado por el usuario y 10 debido a que esto se puede sacar dígito por dígito.
digito = num % 10;
num = num / 10;
  // Para verificar que el dígito es par, se ve el residuo de la division entre el dígito y 2.
residuo = digito % 2;
  // Se usa el condicional If para que en el caso que el residuo del digito y 2 sea 0, se guarde el dígito en la variable par.
if(residuo == 0)
par=par+digito;
} 
  // Se utiliza la variable imput, ya que esta es una copia sin alteraciones del valor ingresado poir el usuario.
printf("\nLa suma de los digitos pares de %d es %d.",input,par); 
return 0; 
}
