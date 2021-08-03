#include <stdio.h>
#include <stdlib.h>

int main(){
 long num, inverso = 0, manter, lembrar;
 printf("Digite um numero: \n");
 scanf("%ld", &num);
 manter = num;
 
 for ( ; num > 0 ; ){
	 lembrar = num%10;
	 inverso = inverso *10 +lembrar;
	 num /= 10;
 }
 printf("Numero digitado: %ld\n", manter);
 printf("Numero invertido: %ld\n", inverso);
 
return 0;
}