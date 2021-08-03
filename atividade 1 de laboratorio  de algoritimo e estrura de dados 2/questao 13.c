#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano, mes, dia, diaSemana;
	int total = 0;
	int total1 = 0;
	int total2 = 0;
	int i;
	
	printf("Informe a data: \n");
	scanf("%d %d %d", &dia, &mes, &ano);
	total = ano / 4;
	total1 = ano / 100;
	total -= total1;
	total2 = ano / 400;
	total += total2;
	
	dia += (ano * 365) + total;
	
	for(i = mes - 1;i >= 1; i--){
		switch(i){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:				
				dia += 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dia += 30;
				break;
			case 2:
				if((((ano % 4) == 0) && ((ano % 100) != 0)) 
				|| (((ano % 100) == 0) && ((ano % 400) == 0))){
					dia += 29;
				}
				else{
					dia += 28;
				}
				break;			
		
		default:
			break;
		}
	}

	diaSemana = dia % 7;
	if((((ano % 4) == 0) && ((ano % 100) != 0)) 
	|| (((ano % 100) == 0) && ((ano % 400) == 0))){
		diaSemana -= 1;
	}
	if (diaSemana == -1){
		diaSemana = 6;
	}
	switch(diaSemana){
		case 1:
			printf("O dia da semana é um domingo.\n");
			break;
		case 2:
			printf("O dia da semana é uma Segunda-feira.\n");
			break;
		case 3:
			printf("O da semana é uma Terça-feira.\n");
			break;
		case 4:
			printf("O dia da semana é uma Quarta-feira.\n");
			break;
		case 5:
			printf("O dia da semana é uma Quinta-feira.\n");
			break;
		case 6:
			printf("O dia da semana é um Sexta-feira.\n");
			break;
		case 0:
			printf("O dia da semana é um Sábado.\n");
			break;
		default:
			break;			 		
	}			
	
	return 0;
}