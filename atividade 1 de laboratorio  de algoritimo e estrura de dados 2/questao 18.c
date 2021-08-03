//questao 18
#include <stdio.h>
int ehPerfeito(int n){
	int i, somadiv = 0;
	for(i = 1; i <= (n/2); i++)
	{
		if((n % i)== 0)
			somadiv = somadiv + i;
	}
	return(n == somadiv);
	
}

int main(int argc, char** argv)
{
	int n;
	
	for(n = 1; n <= 1000; n++)
	{
		if(ehPerfeito(n))
		{
			printf("%d \n", n);
		}
	}
	
	return 0;
}