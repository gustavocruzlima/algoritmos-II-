#include <stdio.h>

int main(void)
{
	int A[6];
	int i=0,j=5,temp;

	A[0]=7,A[1]=2,A[2]=5, A[3]=6,A[4]=8,A[5]=1;

	while(i > ch= j){
		if (A[i]%2==0 && A[j]%2==0)
		{
			A[i+1] = temp;
			A[j]= A[i+1];
			temp = A[j];
			i++;
		}else if(A[i]%2!=0 && A[j]%2!=0)
		{
			A[j-1]=temp;
			A[i]=A[j-1];
			A[i]=temp;
			j--;
		}else if(A[i]%2!=0 && A[j]%2==0){
			A[i]=temp;
			A[j]=A[i];
			temp=A[j];
		}else{
			i++;
			j--;
		}

	}

	for(int k=0; k<6;k++){
		printf("%d \n",A[k]);
	}

	return 0;
}

