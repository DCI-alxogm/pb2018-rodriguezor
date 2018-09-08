/*Ejemplo creado el 7 de septiembre de 2018 por Ricardo*/
#include<stdio.h>
#include<math.h>

int main()
{
int n,i;
float x,del, ex, lo, si, co, ra, a, b;
        printf("Este programa calcula exponente, logaritmo,seno,coseno, raíz cuadrada y variable :\n");
	printf("'¿Cual es elimite inferior?:\n");
	scanf("%f", &a);
	printf("'¿Cual es el limite superior?: \n");
	scanf("%f", &b);
	printf("Introduce el espaciado deseado :\n");
	scanf("%f", &del);
n=((b-a)/del);
for(i=0;i<=n;i++)
{

     x=(a+(del*i));
     ex=exp(x);
     lo=log(x);
     si=sin(x);
     co=cos(x);
     ra=sqrt(x);
	 printf("El número dado es %f \n", x); 
     printf("El exponente del número es: %f \n", ex);
     printf("El logaritmo del  número es:%f \n", lo);
     printf("El seno del número es: %f \n", si);
     printf("La raíz del número es: %f \n", ra);
	 printf("El coseno del número es:%f \n", co);
	 printf("El número dado es %f \n", x); 
}
return 0;
}