#include <stdio.h>

int main(){
int n,r,s;

printf("Digite um numero inteiro: \n");
scanf("%d",&n);
s = 0;

while (n>0){
	
r = n%10;
n = (n - r)/10;
s = s + r;

}
	printf("O resultado e %d \n",s);
	
return 0;
}



