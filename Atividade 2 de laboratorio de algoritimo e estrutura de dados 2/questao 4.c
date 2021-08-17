#include <stdio.h>
#include <math.h>

long int fat(int n) {
	if(n > 1){
		return n *  fat(n-1);
	}
	else{
		return 1;
	}
}

int fun(int n, int k){

	return fat(n) / (fat(k) * fat(n-k));
}

int main(void){
	
	int n,k,linha;
	long int result;
	printf("Informe a quantidade de linhas:\n");
	scanf("%d", &linha);

	for(n = 0; n < linha; n++){
		for(k = 0; k <= n; k++){
			result = fun(n,k);
			printf(" %ld", result);
		}
		printf("\n");
	}

	return 0;
}