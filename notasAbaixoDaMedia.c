#include <stdio.h>

int main()
{
    int i, qnt_alunos, cont_notas = 0;
    float nota;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);
    
    for(i = 1; i <= qnt_alunos; i++){
        printf("Digite a nota do %d aluno: ", i);
        scanf("%f", &nota);
        
        if(nota >= 6)
        {
            cont_notas = cont_notas + 1;
        } 
    }
    
    if(cont_notas != 0)
    {
        printf("\nA quantidade de alunos que obtiveram a nota maior ou igual a 6.0:  %d aluno(s)",cont_notas);
    }
    else {
        printf("\nInexistente");
    }

    return 0;
}



