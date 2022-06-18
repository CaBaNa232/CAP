#include <stdio.h>

int main()
{
    int i, qnt_alunos;
    float media, nota, soma=0;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);
    
    for(i = 1; i <= qnt_alunos; i++)
    {
        printf("Digite a nota do %d aluno: ",i );
        scanf("%f", &nota);
        
        soma += nota;
    }
    media = soma / qnt_alunos;
    printf("\n\nA media geral de todos os alunos foi: %2.2f", media);

    return 0;
}

