// questao 8
#include <stdio.h>
void menu()
{
	printf("==========mostrando tabela de precos================= \n");
	printf("--------------------------------------\n");
	printf("1 - 3.00 \n");
	printf("2 - 4.00 \n");
	printf("3 - 2.80 \n");
	printf("4 - 1.95 \n");
	printf("5 - 5.00 \n");
	printf("0 - para sair \n");
	printf("---------------------------------------\n");
}
int main(int argc, char** argv)
{
int op;
float vendas, preco, resultado;
  menu();
  scanf("%d", &op);
  do
  {
	  
  
  switch(op)
  {
  case 1:
  	preco = 3.00;
  	vendas = 7;
  	resultado = preco * vendas;
  		printf("\n");
  	printf("o preco toltal de venda da semana foi %.2f \n", resultado);
  		printf("\n");
	  break;
  case 2:
  		preco = 4.00;
  	vendas = 14;
  	resultado = preco * vendas;
  		printf("\n");
  	printf("o preco toltal de venda da semana foi %.2f \n", resultado); 
  		printf("\n");
  	break;
  
  case 3:
  		preco = 2.80;
  	vendas = 21;
  	resultado = preco * vendas;
  		printf("\n");
  	printf("o preco toltal de venda da semana foi %.2f \n", resultado);
  		printf("\n");
  	break;
  
  case 4: 
  	preco = 1.95;
  	vendas = 28;
  	resultado = preco * vendas;
  		printf("\n");
  	printf("o preco toltal de venda da semana foi %.2f \n", resultado);
  		printf("\n");
  break;

case 5: 
		preco = 5.00;
  	vendas = 35;
  	resultado = preco * vendas;
  	printf("\n");
  	printf("o preco toltal de venda da semana foi %.2f \n", resultado);
  		printf("\n");
break;
case 0 :
	printf("saindo.....\n");
	break;
  default:
  	printf("numero nao encontrado por favo tente novamente \n");
	  break;
  }
   menu();
  scanf("%d", &op);
  } while(op != 0);
	return 0;
}
