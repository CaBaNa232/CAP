//Esse código possui uma função que realiza a soma de 2 números.
#include <stdio.h>

float somaNumeros(float n1, float n2)
{
    float soma;
    //A variavél soma recebe dois valores a retorna a soma dos mesmos
    soma = n1 + n2;
    return soma;
}


int main()
{
    //Declrações locais
    float num, num2;
    
    //Recebendo o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%f", &num);

    //Recebendo o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    //A variável soma recebe o retorna da função somaNumeros
    float soma = somaNumeros(num, num2);
    printf("\nA soma dos numeros = %2.2f", soma);


    return 0;
}


