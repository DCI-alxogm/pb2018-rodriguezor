/*Creado el 24 de agosto de 2018 por Ricardo Rodriguez*/

#include<stdio.h>
#include<math.h>

int  main()

{

char c;

int es_vocalminuscula, es_vocalmayuscula;

 

printf("Introduce una letra: \n");

scanf("%c", &c);

es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c== 'o' || c== 'u');

es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c== 'O' || c== 'U');

 

if (es_vocalmayuscula || es_vocalminuscula){

printf("%c vocal\n", c);

} else{

printf("%c consonante\n", c);

}

return 0;

}
