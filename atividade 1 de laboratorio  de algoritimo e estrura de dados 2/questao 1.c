
#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i, soma = 0;
	float media = 0.0;
	printf("informe a quantidade de numero a serem lidos: ");
	scanf("%d", &n);
	int vet[n];
	for(i = 0; i < n; i++)
	{
		printf("digite os valores: ");
		scanf("%d", &vet[i]);
	soma = soma + vet[i];	
	media = soma / n;
	}




printf("a soma e %d \n", soma);
 printf("a sua media e %.2f", media);

	return 0;
} 