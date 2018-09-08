/*Creado el 7 de septiembre de 2018 por Ricardo*/
#include <stdio.h>
int main()
{
int in,su,n,a,j;
printf("Este programa muestra los numeros primos en un intervalo definido previamente\n");
printf("Lmite inferior: \n");
scanf("%i", &in);	
printf("Cual es tu limite superior: \n");
scanf("%i", &su); 
for (int j=i;j<=f;j++){
 int a=0;
 for(int n=1;n<=100;n++)
 {
     if(j%n==0) 
     a++;
 }
 if (a==2){ 
	 printf("%d, ", j);
 }
 }
return 0;
}