/*Creado el 20 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>
#include<math.h>


int main()
{
  float g,x,y1,y2,y3;

 printf("Introduce un valor para x \n");
 scanf("%f",&g);
 x=((g*3.1416)/180);
 y1=exp(-x);
 y2=cos(x)+2*tan(x/2);
 y3= log(x)+(3*pow(x,2));
 
 printf("El valor para exp(x) es: %f \n",y1);
 printf("El valor para cos(x)+2tan(x/2) es: %f \n",y2);
 printf("EL VALOR PARA ln(x+3(x*x)) es: %f \n");

return 0;
}

