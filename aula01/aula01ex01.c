#include <stdio.h>
 
 int main( void )
 {
  	
  int numeros[6];
  int media, i, total = 0,j;


      printf("Digite 6 valores\n");

    for (i = 0; i < 6; ++i)
    {
      printf("digite o valor %d ",i + 1);
        scanf("%d",&numeros[i]);

        total = total + numeros[i];
    }

        media = total/6;

        printf("a média é: %d\n",media);

          printf("os valores acima da média são\n");

        for (j = 0; j < 7; ++j)
        {

          if (numeros[j] > media)
          {
            printf("%d\n",numeros[j]);
          }
        }

 	return 0;
 } 