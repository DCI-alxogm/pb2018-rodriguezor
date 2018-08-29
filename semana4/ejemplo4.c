/*Ejemplo creado el 29 de Agosto de 2018 por Ricardo*/
#include<stdio.h>
#include<math.h>
int main()
{
int l=1;
int o;
float d,y,r,a;
float C,F,K;
printf("¿Qué quieres hacer, convertir temperatura o coordenadas cartesianas a polares? \n");
while (l==1)
{
printf("Teclea 1 para convertir coordenadas\n");
printf("Teclea 2 para convertir temperaturas\n");
scanf("%i",&o);
switch (o)
{ case 1:
printf("Este programa sirve para convertir coordenadas cartesianas a coordenadas polares \n");
printf("introduce el valor para x\n");
scanf("%f",&d);
printf("introduce el valor para y\n");
scanf("%f",&y);
r=sqrt((pow(d,2))+(pow(y,2)));
y=(180/3.1416)*y;
d=(180/3.1416)*d;
a=atan(y/d);
if(d>=0 && y>=0)
{a=a;}
else if(d<0 && y>=0)
{a=a+90;}
else if(d<0 && y<0)
{a=a+180;}
else if(d>=0 && y<0)
{a=a+240;}
d=(3.1416/180)*d;
y=(3.1416/180)*y;
printf("El valor de la primera coordenada r es:%f\n",r);
printf("El valor de la segunda coordenada teta es:%f\n",a);
printf("La coordenada inicial para x fue:%f\n",d);
printf("La coordenada inicial para y fue:%f\n",y);
  break;
case 2:
  printf("Conversor de temperaturas de C° a F° y K \n");
printf("¿Que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273.15+C;
printf("Temperatura F° es:%f\n",F);
printf("Temperatura en K es:%f\n",K);
printf("Temperatura inicial en C° es:%f\n",C);
  break;
default:
printf("Opcion invalida\n");
break;
}
printf("Si quieres elegir otra opcion teclea 1\n");
printf("Si quieres salir del programa teclea cualquier numero que no sea 1\n");
scanf("%i",&l);
}
return 0;
}
