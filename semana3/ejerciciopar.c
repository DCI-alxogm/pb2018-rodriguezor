#include<stdio.h>

int main(){
	int a;
	printf("introduce un numero\n");
	scanf("%i",&a);
	if(a%2==0){
	printf(" %i es Par\n",a);
	}else{
	printf(" %i Impar\n",a);
	}
	return 0;
}
