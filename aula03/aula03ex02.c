#include <stdio.h>

int somahora(int *soma,int *hora, int *minuto){

	if (&soma > 60)
	{
		&hora = &hora + (&soma/60);
		&minuto = (&hora * 60) - &soma;
	}else{
		&minuto = &minuto + &soma;
	}

	return 0;

}


int main(void)
{
	int hora, minuto, soma_minuto;


	printf("Digite a hora\n");
	scanf("%d",&hora);// escaneia a hora

		printf("Digite o minuto:\n");
		scanf("%d",&minuto);// escaneia os minutos

		printf("Digite os minutos extras\n");
		scanf("%d",&soma_minuto)

	somahora(&soma_minuto, &hora, &minuto);//inicia funcao que soma os minutos e pode acrescentar horas



	return 0;
}