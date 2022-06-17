/*
Esse programa criado um vetor de tamanho N, e calcula a média, maior elemento, menor elemento e a porcentagem 
de elementos que ficaram acima ou abaixo da média.
*/

#include <stdio.h>

int main()
{

  //Declarações locais e inicialização de variáveis contadoras  
  int i, n, down_media = 0, up_media = 0, perc_down, perc_up;
  float media, soma = 0, maior = 0, menor = __INT_MAX__;
  
  printf("\nDigite a quantidade de notas:");
  scanf("%d", &n);
  
  //Criando o vetor
  float notas[n];

  //Inicializando o vetor
  for(i = 0; i < n; i++)
  {
      printf("Digite a nota: ");
      scanf("%f", &notas[i]);
      soma = soma + notas[i];
  }
    //Calculo da média
    media = soma / n;
     
    //Calculo da quantidade acima ou abaixo da média
    for(i = 0; i < n; i++) {
        
        if(notas[i] > media)
        {
            up_media += 1;
        }
        else 
        {
            down_media += 1;
        }
    }
    
    for(i = 0; i < n; i++) {
        
        if(notas[i] > maior)
        {
            maior = notas[i];
        }
        if(notas[i] < menor)
        {
            menor = notas[i];
        }
    }
    
    //Calculando a porcentagem de notas acima ou abaixo da média
    perc_down = (down_media * 100) / n;
    perc_up = (up_media * 100) / n;
    
    //Impressão dos resultados
    printf("\nA media foi: %2.2f", media);
    printf("\nA quantidade de notas abaixo da media foi: %d - (%d)", down_media, perc_down);
    printf("\nA quantidade de notas acima da media foi: %d - (%d)", up_media, perc_up);
    printf("\nA maior nota foi: %2.1f", maior);
    printf("\nA menor nota foi: %2.1f", menor);
    
    return 0;
}



