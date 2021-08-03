#include <stdio.h>

int main () {
	int i;
    for ( i = 1; i < 101; i++) {
        int n = i;
        
        char *r[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C"};
        int d[] = {1, 4, 5, 9, 10, 40, 50, 90, 100};
        
        int l = (sizeof(d) / sizeof(d[0])) - 1;
        while (n > 0) {
        	
            if (n >= d[l]) {
                printf("%s", r[l]);
                n -= d[l];
            } 
            
			else {
                l--;
            }
        }
        printf("\n");
    }

return 0;
}

