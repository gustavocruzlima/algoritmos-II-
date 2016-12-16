#include <stdio.h>

int expo(int A, int N){
	if (N==0)
	{
		return 1;
	}

	if (N==1)
	{
		return A;
	}else{
		N--;
		return A*expo(A,N);
	}
}

int main(void)
{
	int A=3,N=0,resultado;

	resultado = expo(A,N);
	
	printf("%d\n",resultado);
	return 0;
}