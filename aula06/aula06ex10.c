#include <stdio.h>

int main(void)
{

	int A[5],B[5];

	A[0]=1,A[1]=3,A[2]=4,A[3]=5,A[4]=7;
	B[0]=0,B[1]=1,B[2]=4,B[3]=5,B[4]=9;

	int i=0,j=0;

	
	while(i<5 && j<5){
		if (A[i] < B[j])
		{
			i++;
		}else if (B[j] < A[i])
		{
			j++;
		}else{
			printf("%d\n",B[j]);
			j++;i++;
		}


	} 

	return 0;
}