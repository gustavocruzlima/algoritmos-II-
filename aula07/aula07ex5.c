#include <stdio.h>

int funcao(int V[], int N, int k){

	if (N == 0)
	{
		return -1;
	}

	if (V[N-1]==k)
	{
		return N-1;
	}

	return funcao(V,N-1,k);
}

int main(void)
{
	int N=5,V[N],k=5,r;

	V[0]=5,V[1]=4,V[2]=3,V[3]=6,V[4]=1;

	r=funcao(V,N,k);

	printf("%d\n",r);

	
	return 0;
}