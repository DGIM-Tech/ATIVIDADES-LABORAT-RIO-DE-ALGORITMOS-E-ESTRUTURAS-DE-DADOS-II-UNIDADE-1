//questao 9 letra a
#include <stdio.h>

int main(int argc, char** argv)
{
	int a, b, c, delta;
	   printf("digite o valor de A: ");
	   scanf("%d", &a);	
	   printf("digite o valor de B: ");
	   scanf("%d", &b);	
	   printf("digite o valor de C: ");
	   scanf("%d", &c);	 
	   delta = (b*b) - 4*a*c;
	   printf("o valor de delta e : %d \n", delta);
	   if(delta > 0)
	   {
		   printf("o valor tem 2 raizes \n");
	   }
	   if(delta == 0)
	   {
		   printf("as raizes sao iguais \n");
	   }
	   if(delta < 0)
	   {
		   printf("nao existe raizes ");
	   }
	return 0;
}