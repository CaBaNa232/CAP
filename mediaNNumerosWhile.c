#include <stdio.h>

int main()
{
    int num, soma = 0, cont = 0, media;

    while(num != -1)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
       
       if(num!= -1) {
        soma = soma + num;
       }
       
       if(num != -1)
       {
       cont = cont + 1;
       }
       
    }
    
    media = soma / cont;
    
    if(cont == 0){
        printf("Sequencia vzia = -1");
    }
    else
    {
        printf("\nA media dos numeros digitados foi: %d", media);   
    }
    
    return 0;
}

