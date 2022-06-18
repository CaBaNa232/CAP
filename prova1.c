#include <stdio.h>

int main()
{
    int i;
    float soma, media, num;
    soma = 0;
    
    for(i = 0; i < 10;i++) {
        printf("Digite o %d ponto: ", i + 1);
        scanf("%f", &num);
        soma = soma + num;
    }
    
    media = soma / 10;
    printf("\n");
    
    printf("Pontuacao total: %.2f", soma);
    printf("\nPontuacao media: %.2f", media);
    
    return 0;
}