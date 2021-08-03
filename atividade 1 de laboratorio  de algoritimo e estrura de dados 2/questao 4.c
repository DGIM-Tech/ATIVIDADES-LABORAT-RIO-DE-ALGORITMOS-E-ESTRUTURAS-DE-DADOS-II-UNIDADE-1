// questao 4
#include <stdio.h>
#include <math.h>
int primo(int n){
	if((n == 0) || (n == 1))
      return(0);
  else
  {
	  int i, fim = sqrt(n);
	  for(i = 2; i <=fim; i++)
	  {
		  if((n % i) == 0)
		  	return(0);
	  } 
	  return(1);
  }
  
}
int main(int argc, char** argv)
{

	int i;
printf("a lsita de numero primos de 1 ate 100 \n");
	for(i = 1; i <= 100 ; i++)
	{
	if(primo(i) == 1)	
		printf(" %d \n", i);
	}
	return 0;
}