/*Creado el 22 de agosto de 2018 por Ricardo Rodriguez*/
#include<stdio.h>
#include<math.h>
int main()
{
int o;
float d,y,r,a;
float C,F,K;
printf("¿Qué quieres hacer, convertir coordenadas cartesianas a polares o convertir temperaturas? \n");
printf("Teclea 1 para convertir coordenadas\n");
printf("Teclea 2 para convertir temperaturas\n");
scanf("%i",&o);
switch (o)
{ case 1:
printf("Hola este programa convierte coordenadas cartesianas a coordenadas polares \n");
printf("intorduce el valor para x\n");
scanf("%f",&d);
printf("intorduce el valor para y\n");
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
printf("el valor de tu primer coordenada r es:%f\n",r);
printf("el valor de tu segunda coordenada teta es:%f\n",a);
printf("tu coordenada inicial para x fue:%f\n",d);
printf("tu coordenada inicial para y fue:%f\n",y);
  break;
case 2:
  printf("Este programa convierte temperaturas de grados centigrados a kelvin y farenheit \n");
printf("¿que temperatura en C° quieres convertir? \n");
scanf("%f",&C);
F=(9/5*C)+32;
K=273+C;
printf("la temperatura equivalente en F° es:%f\n",F);
printf("la temperatura equivalente en K es:%f\n",K);
printf("la temperatura incicial en C° es:%f\n",C);
  break;
default:
printf("opcion invalida\n");
break;
}
return 0;
}
