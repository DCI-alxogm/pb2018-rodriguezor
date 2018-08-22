/*Creado el 20 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>
#include<math.h>


int main()
{
  float x,y,z,r,teta,fi;

 printf("Introduce las coordenadas x,y,z \n");
 scanf("%f",&x);
 scanf("%f",&y);
 scanf("%f",&z);
 r=sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
 teta=acos(z/r);
 fi=atan(y/x);
 printf("Tus coordenadas esfericas son: %f \n",r);
printf("Tus coordenadas esfericas son: %f \n",teta);
printf("Tus coordenadas esfericas son: %f \n",fi);
 
return 0;
}
