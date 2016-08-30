#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char a[20], b[20], c[20], maior[20];

//leitura de caracteres
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);


	//comparando valores da tabela ASCII
	//se a for o maior
	if (strcmp(a,b)>0 )
	{
		strcpy(a,b);
	}
	if (strcmp(b,c)>0)
	{
		strcpy(b,c);
	}
	if (strcmp(a,b)>0 )
	{
		strcpy(a,b);
	}

	printf("%s %s %s\n",a,b,c );



	return 0;
}