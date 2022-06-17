//Esse código recebe um string, retorna o tamanho e mostra a string ivertida
#include <stdio.h>
#include<string.h>

int main()
{
    //Declarações locias
    int i, tam;
    char pal[60]; //Na linguagem C, a string é um vetor de caracteres
    
    //Recebendo a palavra
    printf("Digite um palavra: ");
    gets(pal);
    
    //A função strlen retorna o tamanho da string
    tam = strlen(pal);
    
    printf("\nO tamanho da palavra = %d", tam);
    printf("\nA palavra invertida = ");
    
    //Invertendo a string, começando do tam -1 (para ignorar o \n) e chegando até o primeiro caractere da string
    for(i = tam - 1; i >= 0; i--)
    {
        printf("%c", pal[i]);
    }

   printf("\nA palavra digitada foi: %s",pal);
   
   return 0;
}

