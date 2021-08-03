#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int m, int n) {
    if(n == 1){
        return m + 1;
    }
    else if(m == 1) {
        return n + 1;
    }

    else if(m > 1 && n > 1) {
        return fun(m, n-1) + (fun(m-1, n));
    }
}

int main() {

    int m, n, i, j, cal;

  printf("Digite o Valor de m:\n ");
    scanf("%d", &m);
  printf("Digite o Valor de n:\n ");
    scanf("%d", &n);

  for (i = 0; i <= m; i++){

    for (j = 0; j <= n; j++){

      cal = fun(m, n);  
    }
  }
  printf("Retorno da Funcao: %d", cal);

  return 0;
}