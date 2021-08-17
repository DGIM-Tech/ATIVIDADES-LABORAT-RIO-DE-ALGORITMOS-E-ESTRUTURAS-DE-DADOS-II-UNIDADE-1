//questao 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verificador_palidromo(char str[100], int n)
{
	int i;
	for(i = 0; i < n; i++) 
	
	if(str[i] != str[n - i - 1])
	
	return 0; 
   return 1;

}

int main(int argc, char** argv)
{
	char palavra[100];
	
	printf("digite uma frase para verifica se e palindromo: ");
	scanf("%s", palavra);
	
	
	if(verificador_palidromo(palavra, strlen(palavra)))
	{
		printf("a palavra %s eh uma palindromo \n", palavra);
	}
	else
	{
		printf("a palavra %s nao e palidrome \n", palavra);
	}
	
	return 0;
}