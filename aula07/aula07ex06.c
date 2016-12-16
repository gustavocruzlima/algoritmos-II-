#include <stdio.h>

int fibo(N){

	if (N==1 || N==2)
	{
		return 1;
	}

	return fibo(N-1)+fibo(N-2);

}


int main(int argc, char const *argv[])
{
	int N;

	scanf("%d",&N);
	fibo(N);
	printf("%d\n",fibo(N));
	return 0;
}