/*Creado el 16 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>

int main()
{
  int a,b,c,d,e1,e2,e3,e4;

 printf("Introduce el primer numero \n");
 scanf("%i",&a);

 printf("Introduce el segundo numero \n");
 scanf("%i",&b);

 printf("Introduce el tercer numero \n");
 scanf("%i",&c);

 printf("Introduce el cuarto numero \n");
 scanf("%i",&d);

e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a*(b*c)/d;

 printf("El resultado de la primera operacion(e1=(a+b)*c/d;) es: %i \n",e1);
 printf("El resultado de la segunda operacion(e2=((a+b)*c)/d) es: %i \n",e2);
 printf("El resultado de la tercera operacion(e3=(a+b)*c/d;)s: %i \n",e3);
 printf("El resultado de la cuarta operacion(e4=a*(b*c)/d;s: %i \n",e4);

 
 return 0;
}
