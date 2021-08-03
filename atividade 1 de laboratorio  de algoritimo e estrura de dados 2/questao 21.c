// questao 21
#include <stdio.h>
#include <math.h>
int mdc (int a , int b )
{
	int result = a ;
	if ( a < b )
	{
		result = mdc (a , b - a );
	}
	else if ( a > b )
	{
		result = mdc ( a - b , a );
	}
	return result ;
}

int fatorial (int n)
{

	if ( n == 0)
	{
		return 1;
	}
	else
	{

		return n * fatorial ( n - 1);
	}
}
int fib (int n )
{
	if(n == 1)

		return(0);

	if(n == 2)

		return(1);
	int i, f = 0, f1 = 0,f2 = 1;
	for(i = 3; i <=n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		
	}
	return(f);

}
int primo(int n)
{
	if((n == 0) || (n == 1))
		return(0);
	else
	{
		int i, fim = sqrt(n);
		for(i = 2; i <= fim; i++)
		{
			if((n % i) == 0)
				return(0);
		}
		return(1);
	}

}
void menu()
{
	printf("1 - para mdc \n");
	printf("2 - para fatorial \n");
	printf("3 - para Fibonacci \n");
	printf("4 - para ver se o numero e primo \n");
	printf("5 - para sair \n");
}
int main(int argc, char** argv)
{
	int a, b, res, n , rn, numero, op, prim, i;
	menu();
	scanf("%d", &op);
	while(op != 5)
	{



		switch(op)
		{
		case 1:
			printf("digite o valor de a para calcula o mdc: ");
			scanf("%d", &a);
			printf("digite o valor de b para calcula o mdc: ");
			scanf("%d", &b);
			res = mdc(a, b);
			printf("mdc e %d \n", res);


			break;
		case 2:
			printf("digite um valor n para calcula o fatorial: ");
			scanf("%d", &n );
			rn = fatorial(n);
			printf("o seu faltoria e %d \n", rn);
			break;
		case 3:
			
			printf("digite um numero para calcula o Fibonacci: ");
			scanf("%d", &numero );
		
			for(i = 1; i <= numero; i++)
			{
				printf("%d: %d\n",i , fib(i));
			}

			break;
		case 4:
			printf("digite o valor pra ver se e primo: ");
			scanf("%d", &prim);
			if(primo(prim) == 1)
			{
				printf("o numero %d e primo\n", prim);
			}
			else
			{
				printf("o numeo %d nao e primo \n", prim);
			}
			break;
		case 5:
			break;
		default:
			break;
		}
		menu();
		scanf("%d", &op);
	}
		printf("saindo \n");




	return 0;
}
