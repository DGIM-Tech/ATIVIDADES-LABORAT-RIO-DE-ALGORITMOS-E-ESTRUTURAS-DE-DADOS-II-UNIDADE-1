//questao 1
#include <stdio.h>
#include <time.h>

int algoritmoDemorado ( int n )
{
	int soma = 0;
	int i, j,k,l;
	for ( i = 0; i < n ; i ++) 
	{
		for (  j = 0; j < n; j ++)
		{
			for ( k = 0; k < n; k ++)
			{
				for (  l = 0; l < n; l ++)
				{
					soma = i + j + k + l ;
				}
			}
		}
	}
	return soma ;
}

int main(int argc, char *argv[])
{
	int f;

clock_t t;
t = clock( );
printf("calculano....\n");
f = algoritmoDemorado(200);


t = clock() - t;

	
	
	printf("Levei %d cliques em (%f segundos )\n",(int) t,((float)t)/CLOCKS_PER_SEC);
	return 0;
}
