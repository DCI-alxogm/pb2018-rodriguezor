/*Creado el 16 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>

int main()
{
  float a,b,c,d,e1,e2,e3,e4;

 printf("Introduce el primer numero \n");
 scanf("%f",&a);

 printf("Introduce el segundo numero \n");
 scanf("%f",&b);

 printf("Introduce el tercer numero \n");
 scanf("%f",&c);

 printf("Introduce el cuarto numero \n");
 scanf("%f",&d);

e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a*(b*c)/d;

 printf("El resultado de la primera operacion(e1=(a+b)*c/d;) es: %f \n",e1);
 printf("El resultado de la segunda operacion(e2=((a+b)*c)/d) es: %f \n",e2);
 printf("El resultado de la tercera operacion(e3=(a+b)*c/d;)s: %f \n",e3);
 printf("El resultado de la cuarta operacion(e4=a*(b*c)/d;s: %f \n",e4);

 
 return 0;
}
