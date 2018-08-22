/*Creado el 22 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>
#include<math.h>

int main ()
{
 int opcion ;
 printf("Teclear una opcion /n")
 printf("(1) para convertir temperaturas");
 printf("(2) para convertir coordenadas ");
 
 scandf("%i",&opcion)
 switch(opcion)

 {
 case 1:
         printf("Entre a la opcion 1") ;
         break;
 case 2:
         printf("Opcion invalida") ;
         break;
