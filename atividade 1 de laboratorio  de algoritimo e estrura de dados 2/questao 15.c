//Questão 15:
#include <stdio.h>
	
	int main(void){
	int i, j, n, m;
	
	scanf("%d %d", &m, &n);
	
	for (i = 1; i <= m; i = i + 1){
		for (j = 1; j <= n; j = j + 1) printf("*");
           printf("\n");
	}
  	  return 0;
  }