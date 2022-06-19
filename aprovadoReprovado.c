//Esse código faz uma média aritimética simples e verifica se o aluno está aprovado ou reprovado
#include <stdio.h>

int main()
{
    float n1,n2,media;
    
    printf("\nNota invalida, digite novamente");  
    
    printf("\nDigite a 1 nota: ");
    scanf("%f", &n1);
    
    printf("\nDigite a 2 nota: ");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2;
    
    if(media >= 6)
    {
        printf("\n\nMedia = %2.2f -- Aprovado", media);
    }
    if(media < 6)
    {
        printf("\n\nMedia = %2.2f -- Reprovado", media);
    }

    return 0;
}
