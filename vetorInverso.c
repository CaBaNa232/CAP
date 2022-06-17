//Esse código recebe um vetor e retorna os elementos em ordem iversa

#include <stdio.h>
#include<stdlib.h>

int main()
{
    //Declrações Locais
    int i, tam;
    
    //Recebendo o tamanho do vetor
    printf("\nDigite o tamanho da sequencia: ");
    scanf("%d", &tam);
    //Criando o vetor de tamanho 'tam'
    int seq[tam];
    
    //Recebendo os elementos
    for(i = 0; i < tam; i++){
        printf("Digite os numeros: ");
        scanf("%d", &seq[i]);
    }
    printf("\n\nA sequencia inversa: ");

    //O laço se inicia em tam - 1(para ignorar o \n) indo até a primeira posição do vetor
    for(i = tam - 1; i >= 0; i--) {
        printf("%d ", seq[i]);
    }
    
    return 0;
}

