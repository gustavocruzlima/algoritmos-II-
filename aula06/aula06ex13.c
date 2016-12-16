#include <stdio.h>

 int main(void)
 {
 	int N=9,B[N],temp,i=0,j=8;
 	int A[N];

 	A[0]=5,A[1]=6,A[2]=2,A[3]=7,A[4]=9,A[5]=1,A[6]=8,A[7]=3,A[8]=7;

 	A[0] = B[N/2];

 	while(i<=j){

 		if (A[i]<B[N/2])
 		{
 			A[i]=B[i];
 			i++;
 		}else if (A[i] > B[N/2])
 		{
 			A[i] = B[j];
 			j--;
 		}

 		if (A[j]<B[N/2])
 		{
 			A[j] = B[i];
 			i++;
 		}else if (A[j]>B[N/2])
 		{
 			A[j]=B[j];
 			j--;
 		}

 	}

 	for (int k = 0; i < 9; ++i)
 	{
 		printf("%d\n",B[k]);
 	}


 	return 0;
 }

 