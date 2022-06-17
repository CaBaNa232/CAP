//Esse código realiza o calculo da idade média de N pessoas utilizando um vetor
#include<stdio.h>

int main()
{
    //Declarações locais
    int i, qtd_func, soma = 0, media;
    
    printf("Digite a quantidade de funiconarios: ");
    scanf("%d", &qtd_func);
    
    //Criando o vetor com o tamanho da quantidade de funcionários
    int idade[qtd_func];
    
    for(i = 0; i < qtd_func; i++) {
        
        printf("Digite a idade do funcionario %d: ", i+1);
        scanf("%d", & idade[i]);
        soma = soma + idade[i];
    }
    //Calculando a media da idade dos funcionários
    media = soma / qtd_func;
    
    printf("\nA idade media dos funcionarios = %d anos", media);
    
    return 0;
}


