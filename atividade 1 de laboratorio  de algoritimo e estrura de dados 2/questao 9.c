//questao 9
#include <stdio.h>
 int main()
{
	int i;
	
	for(i = 0; i <= 127 ; i++)
	{
	if(i%10==0)
			printf("\n");
		printf("%d = %c\t",i, i);
		
	}
	return 0;
}