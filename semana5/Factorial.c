/*Ejemplo creado el 7 de septiembre de 2018 por Ricardo*/
#include<stdio.h>
int main()
{
    int a,p,fact=1,n,r;
    while(p==1||2)
{
    printf("Hallo,este programa calcula la suma factorial de un numero");
    printf("Ingresa tu numerol\n");
    scanf("%i",&n);
    if (n<0)fact=0;
    else if(n==0) fact=1;
    else
{
    for(a=1;i<=n;a++)
{
    fact=fact*a;

    r=fact;
}
    printf("\n esta es la suma actorial:%i",r);
}
    printf("Teclea 1 para continuar o 2 para salir?\n");
    scanf("%i",&p);
}
return 0;
}