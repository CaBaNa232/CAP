//Este código cria um vetor de tamanho 5 e calcula a média dos 5 elementos

#include <stdio.h>

int main()
{
    //Declarações locais e inicializações de variávies
    int i;
    float media, soma = 0, notas[5];
    
    //Inicializando o vetor
    for(i = 0; i < 5; i++){
       printf("Digite a nota: ");
       scanf("%f", &notas[i]);
       
       //Somando todos os elementos do vetor
       soma = soma + notas[i];
    }
    
    //Calculo da média
    media = soma / 5;
    printf("\nA media das nota = %2.1f", media);
    
    return 0;
}
