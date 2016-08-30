#include <stdio.h>

int horaminuto(int mnts,int *H,int *M){

	*H = mnts/60;
	*M = (*H *60) - mnts;

	return 0;

}


int main(void)
{
	
	int mnts,h,m;

	printf("digite os minutos\n");
		scanf("%d",&mnts);

	horaminuto(mnts,&h,&m);



	printf("Hora: %d\n",h);
		printf("Minutos: %d\n",m);

		

	return 0;
}