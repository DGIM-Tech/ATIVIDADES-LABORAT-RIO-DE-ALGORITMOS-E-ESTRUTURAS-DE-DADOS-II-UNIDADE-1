#include <stdio.h>
#include <math.h>


int main(){
	
	
	int a,b,c;
 
		printf("Digite o valor do primeiro lado: \n");
		scanf("%d",&a);

		printf("Digite o valor de segundo lado: \n");
		scanf("%d",&b);

		c = sqrt(pow(a,2) + pow(b,2));

	   	printf("O resutado e %d \n", c);
	
return 0;
}
