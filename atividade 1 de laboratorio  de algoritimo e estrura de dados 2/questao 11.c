#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa,n;
    
    printf("Informe um Valor N:\n");
    scanf("%d", &n);

    for(hipotenusa = 1; hipotenusa < n; hipotenusa++) {
        for(cateto1 = 1; cateto1 < n; cateto1++) {
            for(cateto2 = 1; cateto2 < n; cateto2++) {
                int esquerdo = cateto1 * cateto1 + cateto2 * cateto2;
                int direito = hipotenusa * hipotenusa;

                if(esquerdo == direito) {
                    printf("Os valores de Hipotenusa,Cateto1 e Cateto 2: %d - %d - %d\n", hipotenusa, cateto1, cateto2);
                } else if(esquerdo > direito) 
				{
                    break;
                }
            }
        }
    }

    return 0;
}