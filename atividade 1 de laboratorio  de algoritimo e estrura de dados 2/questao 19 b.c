//questao 19 letra b
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int a, b, c, delta;
	double raiz, raiz2;
	printf("digite o valor de A: ");
	scanf("%d", &a);
	printf("digite o valor de B: ");
	scanf("%d", &b);
	printf("digite o valor de C: ");
	scanf("%d", &c);
	delta = (b * b) - 4 * a * c;
	printf("o valor de delta e : %d \n", delta);
	if(delta > 0)
	{
		printf("o valor tem 2 raizes \n");
		raiz =  ( -b + sqrt(delta)) / 2 * a;
		raiz2 = (-b - sqrt(delta)) / 2 * a;
		printf("a primeira raiz e %.2lf \n",raiz );
		printf("a sengunda raiz e %.2lf, \n", raiz2);
	}
	if(delta == 0)
	{
		printf("as raizes sao iguais \n");
       raiz =  ( -b + sqrt(delta)) / 2 * a;
		raiz2 = (-b - sqrt(delta)) / 2 * a;
		printf("a primeira raiz e %.2lf \n",raiz );
		printf("a sengunda raiz e %.2lf, \n", raiz2);
	}
	if(delta < 0)
	{
		printf("nao existe raizes ");
	}
	return 0;
}
