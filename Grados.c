/*Creado el 20 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>

int main()
{
  float c,C,f,k;

 printf("introduce la temperatura en grados C° \n");
 scanf("%f",&c);
 k=(c+273);
 f=((c*1.8)+32);
 C=((f-32)/1.8);
 printf("Tu temperatura en Kelvin es: %f \n",k);
 printf("Tu temperatura en Fahrenheit° es: %f \n",f);
 printf("Tu temperatura en Celsius° es: %f \n",C);
 
 return 0;
}
