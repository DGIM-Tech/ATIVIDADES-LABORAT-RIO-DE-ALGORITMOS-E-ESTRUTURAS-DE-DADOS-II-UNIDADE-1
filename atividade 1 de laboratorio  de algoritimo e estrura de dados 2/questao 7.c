#include <stdio.h>

int main()
{
int i,j,a,f =1;
for (f = 1; f <= 5; i = i + 1){
   printf("Diga  o valor: \n");
   scanf("%d", &a);
       if (a >= 1 && a <=30)
       {
         for (i = 1; i <= 1; i = i + 1)
         {
               for (j = 1; j <= a; j = j + 1) printf("*");
               printf("\n");
f = f + 1;
         }
       }
 else {
 	printf("Numero invalido\n");
 }
}
 return 0;
}