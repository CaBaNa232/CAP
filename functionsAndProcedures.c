//Esse código realiza várias operações em um vetor utilizando funções
#include <stdio.h>
#include <stdlib.h>

// Constantes
#define TAMANHO 50

/*
Nome: ImprimeVetor
Objetivo: imprimir na tela o valor de todos os elementos do vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parâmetro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parâmetro de entrada de dados)
Valor de retorno:
- Inexistente (procedimento)
*/
void ImprimeVetor(int v[TAMANHO], int nElementos)
{
    int i;
    
    // Escrita do vetor
    // Varredura completa
    for(i = 0; i < nElementos; i++)
    {
        printf("vetor[%d] = %d\n", i, v[i]);
    }
}

/*
Nome: ImprimeVetor2
Objetivo: imprimir na tela o valor de todos os elementos do vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
Valor de retorno:
- Inexistente (procedimento)
*/
void ImprimeVetor2(int *v, int nElementos)
{
    int i;
    int *p; // Ponteiro temporÃ¡rio

    // InicializaÃ§Ã£o
    p = v;

    // Escrita do vetor
    // Varredura completa
    for(i = 0; i < nElementos; i++)
    {
        printf("vetor[%d] = %d\n", i, *p);
        p++;
    }
}

/*
Nome: InicializaVetor
Objetivo: inicializar o vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
Valor de retorno:
- Inexistente (procedimento)
*/
void InicializaVetor(int v[TAMANHO], int nElementos)
{
    int i; // Contador de laÃ§o

    for(i = 0; i < nElementos; i++)
    {
        v[i] = i;
    }
}

/*
Nome: LeVetor
Objetivo: ler o vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
Valor de retorno:
- Inexistente (procedimento)
*/
void LeVetor(int v[TAMANHO], int nElementos)
{
    int i;
    for(i = 0; i < nElementos; i++)
    {
        scanf("%d", &v[i]);
    }
}

/*
Nome: Randomizer
Objetivo: aleatorizar o vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
Valor de retorno:
- Inexistente (procedimento)
*/
void Randomizer(int v[TAMANHO], int nElementos)
{
    int i;

    srand (time(NULL));
    for (i = 0; i < nElementos; i++)
    {
        v[i] = rand() % 100 + 1;
    }
}

/*
Nome: existeElementoVetor1
Objetivo: verificar se um elemento de busca existe ou nÃ£o existe no vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
- elementoBusca: elemento de busca (parÃ¢metro de entrada de dados)
Valor de retorno:
- 0 se o elemento de busca nÃ£o estÃ¡ no vetor
- 1 se o elemento de busca estÃ¡ no vetor
*/
int existeElementoVetor1(int v[], int nElementos, int elementoBusca)
{
    int i;
    int achou = 0;
    for (i = 0; i < nElementos; i++)
    {
        if(v[i] == elementoBusca)
        {
            achou = 1;
            break;
        }
    }
    return achou;
}

/*
Nome: existeElementoVetor2
Objetivo: verificar se um elemento de busca existe ou nÃ£o existe no vetor
ParÃ¢metros Formais:
- v: vetor de inteiros (parÃ¢metro de entrada de dados)
- nElementos: nÃºmero de elementos do vetor (parÃ¢metro de entrada de dados)
- elementoBusca: elemento de busca
- *achou:
Valor de retorno:
- 0 se o elemento de busca nÃ£o estÃ¡ no vetor
- 1 se o elemento de busca estÃ¡ no vetor
*/
int existeElementoVetor2(int v[], int nElementos, int elementoBusca, int *achou)
{
    int i;
    *achou = 0;
    for (i = 0; i < nElementos; i++)
    {
        if(v[i] == elementoBusca)
        {
            *achou = 1;
            break;
        }
    }
}

int main()
{
    // Declaraçõµes locais
    int vetor[TAMANHO];
    int achou;
    int elemento;

    InicializaVetor(vetor, TAMANHO);
    //ImprimeVetor(vetor, TAMANHO);

    //ImprimeVetor2(vetor, TAMANHO);

    //LeVetor(vetor, TAMANHO);
    //ImprimeVetor(vetor, TAMANHO);

    //Randomizer(vetor, TAMANHO);
    ImprimeVetor(vetor, TAMANHO);

    elemento = 4;
    achou = existeElementoVetor1(vetor, TAMANHO, elemento);

    if(achou)
        printf("Elemento %d existe no vetor!!!\n", elemento);
    else
        printf("Elemento %d não existe no vetor!!!\n", elemento);

    ImprimeVetor(vetor, TAMANHO);

    elemento = 51;

    existeElementoVetor2(vetor, TAMANHO, elemento, &achou);

    if(achou)
        printf("Elemento %d existe no vetor!!!\n", elemento);
    else
        printf("Elemento %d nao existe no vetor!!!\n", elemento);
    
    return 0;
}
