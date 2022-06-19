//Esse código utiliza um laço para ir somando a idade fornecida, até que o valor 0 zero digitado
#include <stdio.h>

int main()
{
    int soma = 0, idade, i, media, cont = 0;
    

    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    while (idade != 0) {
        
        soma += idade;
        cont++;

        printf("Digite a idade: ");
        scanf("%d", &idade);
       
    }

    if (cont == 0) {
        printf ("\nIdade digitada: %d", idade);
    }
    else {
        media = soma / cont;
        printf ("\nMedia de idade: %d", media);
    }

    return 0;
}
