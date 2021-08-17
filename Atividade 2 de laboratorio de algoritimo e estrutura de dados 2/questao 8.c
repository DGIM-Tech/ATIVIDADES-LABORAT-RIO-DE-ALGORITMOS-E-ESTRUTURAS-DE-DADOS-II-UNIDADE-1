#include <stdio.h>
#include <stdlib.h>
int fatorial (int n )
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

long fatorialcaudal(int n, int fat) {
  if(n== 0)
		return fat;
	return fatorialcaudal(n-1, fat * n); 
}

long fatorialcauda(int n)
{
	return fatorialcaudal(n, 1);
}

int main(int argc, char *argv[])
{
	int result, re;


	result = fatorial(5);
	printf("o resultado da funcao fatorial: %d \n", result);
    re = fatorialcauda(5);
	printf("o resultado da funcao fatorial com cauda: %d \n", re);
	return 0;
}