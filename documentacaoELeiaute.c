//Esse programa tem por objetivo treinar a escrita de uma boa documentação e um bom leiaute de código
#include<stdio.h>

//Esta função recebe um inteiro n >= 1 e um vetor v e devolve o maior elemento do vetor v[0, 1, ..., n]
int maior_elemento (int *v, int n) {

    int i, maior = v[0];
    for (i = 0; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

//Essa função recebe um inteiro n >= 1 e um vetor v e devolve a soma dos elementos dos vetor[0, 1, 2,..., n]
int soma_elementos (int *v, int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma;
}

int main()
{
    int vetor[10], i, maior, soma;
    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf ("%d", &vetor[i]);
    }
    maior = maior_elemento (vetor, 10);
    printf ("\nO maior elemento do vetor = %d", maior);
    soma = soma_elementos (vetor, 10);
    printf ("\nA soma dos elementos do vetor = %d", soma);
    return 0;
}
