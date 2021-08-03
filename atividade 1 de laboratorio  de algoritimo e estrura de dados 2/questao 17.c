#include <stdio.h>
#include <stdlib.h>

int main(){
	int h,m,s,total;
	
	printf("Informe o horario: \n");
	scanf("%d %d %d", &h ,&m ,&s);
	
		if((h <= 23) && (m <= 59) && (s <= 59)
			&& (h > 0) && (m > 0) && (s > 0)){
			if(h > 11){
				h = h - 12;	
			}
			if (h <= 11){
				total = ((h*60)*60) + (m*60) + s;
				printf("%d:%d:%d total: %d", h ,m ,s ,total);
			}
	    }	
	return 0;
}