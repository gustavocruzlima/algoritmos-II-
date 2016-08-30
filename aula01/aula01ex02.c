#include <stdio.h>

int main(void)
{
	
	int v[5];
	int i;

	v[0] = 1;
		v[1] = 2;
			v[2] = 3;
				v[3] = 4;
					v[4] = 5;



		for (i = 4; i >= 0; --i)
		{
			printf("%d\n",v[i]);
		}


	return 0;
}