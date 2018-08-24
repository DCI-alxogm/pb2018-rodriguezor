/*Creado el 24 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>
#include<math.h>

 

int  main()

{

int num1, num2;

printf("Introduzca dos numeros enteros: \n");

scanf("%i",&num1);

scanf("%i",&num2);
 

if(num1==num2)

{

printf("Resultado; %d",num1,num2);

}

else if (num1 > num2)

{

printf("Resultado: %d > %d",num1,num2);

}

else

{

printf("Result: %d < %d",num1,num2);

}

return 0;

}

