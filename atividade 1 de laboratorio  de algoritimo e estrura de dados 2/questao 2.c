//questao 2
#include <stdio.h>

int main(int argc, char** argv)
{
	float resut;
	int c = 50, i;
	
	printf("------tabela de temperatura--------------------\n");
	for(i = 30; i <= c ; i++)
	{
	 	resut = (i * 9 /5 ) + 32;
	 	
	 	printf(" graus %d c   =   %.1f Fahrenheit \n", i, resut);
	}
	printf("-------------------------------------------------\n");
	return 0;
} 