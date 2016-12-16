#include <stdio.h>

int main(void)
{
		int A[5],B[5],C[10];

	A[0]=1,A[1]=3,A[2]=4,A[3]=5,A[4]=7;
	B[0]=0,B[1]=1,B[2]=4,B[3]=5,B[4]=9;

	int i=0;

	while(i<5){

		C[i] = A[i];

		C[i+1] = B[i];

		printf("%d %d ",C[i],C[i+1]);

		i++;
	}



	return 0;
}