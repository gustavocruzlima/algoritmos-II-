#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int A[2][4], B[2][4], C[2][4];
	int i,j;
	
	//Le A	
	for (i = 0; i < 2 ; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("Digite A[%d][%d]",i,j);
			scanf("%d/n",&A[i][j]);
		}
	}

	//le B
		for (i = 0; i < 2 ; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("Digite B[%d][%d]",i,j);
			scanf("%d/n",&B[i][j]);
		}
	}

	//soma C
	for (i = 0; i < 2 ; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}	

	for (i = 0; i < 2 ; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("Soma: %d\n",C[i][j]);
		}
	}	
	


	
	return 0;
}