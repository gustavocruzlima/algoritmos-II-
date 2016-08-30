#include <stdio.h>

int main(void)
{
	
	int A[5], B[4], i, j, h = 0,k;

	printf("digite 5 valores para o primeiro vetor\n");

		for (i = 0; i < 5; ++i)
		{
			printf("digite o valor %d ",i + 1);
				scanf("%d",&A[i]);
		}

		printf("digite 3 valores para o segundo vetor\n");

		for (j = 0; j < 3; ++j)
		{
			printf("digite o valor %d ",j + 1);
				scanf("%d",&B[j]);
		}		

		


		do
		{
			
			for (k = 0; k < 5; ++k)
			{
				if (A[k] == B[h])
				{
					printf("A intersecção é: %d\n",A[k]);
				}
			}



			h++;
		} while (h < 3);





	return 0;
}