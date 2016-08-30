#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char a[20], b[20], c[20];

//leitura de caracteres
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);


	//comparando valores da tabela ASCII
	if (strcmp(a, b) > 0)//se a for maior que b
	{
		if (strcmp(a, c)>0)//se a for maior que c
		{
				printf("%s é o maior \n",a);
		}
	}
	else{ 
		if (strcmp(b,c) > 0)//se b for maior que c
		{
			printf("%s é maior \n",b);
		}else {
			// se c for o maior imprime-o
			printf("%s é maior\n",c);
		}
	}
		
		

		





	return 0;
}