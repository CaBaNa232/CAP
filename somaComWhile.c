//Esse código realiza a soma de N números utilizando um while, que pode ser parado a qualquer momento
#include <stdio.h>

int main()
{
  char tecla;
  int cont = 0;
  float num, soma = 0, media;

  printf("Deseja continua? ");
  scanf("%c", &tecla);
  
  while(tecla == 'S' || tecla == 's') {
        
        printf("\nDigite um numero: ");
        scanf("%f", &num);

        soma += num;
        cont += 1;

        setbuf(stdin,NULL);
        printf("Deseja continua? ");
        scanf("%c", &tecla); 
    }
    
  if(cont == 0) {
      cont = 0;
      media =0;
      printf("Foram digitados: %d numeros, portanto, a media = %.2f", cont ,media);
    }
  else {
    media = soma / cont;
    printf("\n\nA mrdia dos %d numeros digitados = %.2f", cont, media);
  }
    
    return 0;
}

