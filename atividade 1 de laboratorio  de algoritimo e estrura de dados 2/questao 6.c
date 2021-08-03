#include <stdio.h>
#include <stdlib.h>
 int main()
{
    int n, fat, i;
    //fat = 1;


	printf("digite um numero N:");
    scanf("%d", &n);
    

    fat = 1;
    i = 1;

    while(i <= n){
  
        fat = fat * i;
        //i++;
        printf("fatorial de %d =  %d\n", i, fat);
        i++;
    }
    printf("o valor do fatorial de 1 ate %d = %d", n, fat);
 
	return 0;
}

