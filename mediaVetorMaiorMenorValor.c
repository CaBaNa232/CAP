/*
Esse código cria um vetor de tamano N, e posteriormente calcula a soma de todos os elementos, calcula a media e verifica 
o maior e o menor valor do vetor. 
*/

#include <stdio.h>

int main()
{
    //Declarações locais e inicialização de variávies
    int i,tamanho;
    float soma = 0, media = 0, maior = 0, menor = __INT_MAX__;

    //Tamanho do vetor
    printf("Quantas notas deseja? ");
    scanf("%d", &tamanho);
    
    //Criando o vetor com 'tamanho'
    float notas[tamanho];
    
    //Inicializando o vetor
    for(i = 0; i < tamanho; i++) {
        printf("Digite as notas: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    } 
    
    //Calculando qual é o maior e o menor elemento do vetor
     for(i = 0; i < tamanho; i++) {

        if (notas [i] < menor)
        {
            menor = notas[i];
        }
         else if (notas [i] > maior)
         {
            maior = notas[i];
        }
        
    } 
    //Calculo da média
    media = soma / tamanho;
    //Impressão dos resultados
    printf("\nA media das notas foi: %.2f", media);
    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);
    
    return 0;
}
