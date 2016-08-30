#include <stdio.h>

int main(void){

	int A[]= {4, 6, 1, 2, 8, 7}, B[]= {9, 3, 6, 4, 2};


	interseccao(A,N,B,M);


	return 0;
}

int interseccao(int A[],int N, int B[],int M){
	int i, j;
	M  = 5;
	N = 6;

for (j = 0; j < M; j++)
{
	for (i = 0; i < N; i++)
	{
		if (A[i] == B[j])
		{
			printf("%d\n",B[j]);
		}
	}
  }

}