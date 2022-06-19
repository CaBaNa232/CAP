//Esse código preenche um vetor, imprime, e busca se um elemento fornecido está ou não no vetor
#include<stdio.h>

void inicia (int *vet, int tam){
    
    int i;
    
    printf("Preencha o vetor de tamanho %d\n", tam);
    printf("\n");
    
    for (i = 0; i < tam; i++){
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
}

void imprime (int *vet, int tam) {
    
    int i;
    
    for (i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
}

int pesquisa (int *vet, int tam, int elem){
    
    int i, achou;
    achou = 0;
    
    for (i = 0; i < tam; i++){
       if (elem == vet[i]){
           achou = 1;
       }
     
    }
    return achou;
    
}

void insertionSort(int *v, int n) 
{ 
    int i, j; 
    int aux;

    for (i = 1; i < n; i++) { 
        aux = v[i]; 
        j = i - 1; 
  
        while (j >= 0 && v[j] > aux) { 
            v[j + 1] = v[j]; 
            j = j - 1; 
        } 
        v[j + 1] = aux; 
    } 
} 

int main()
{
    int tam;
    int busca;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    printf("\n");
    
    int vetor[tam];
    inicia (vetor, tam);
    
    printf("\n");
    
    imprime (vetor, tam);
    
    printf("\n");
    printf("\n");
    
    printf ("Digite o elemento da busca: ");
    scanf ("%d", &busca);
    
    pesquisa (vetor, tam, busca);
    
    if(pesquisa (vetor, tam, busca) == 1) {
        printf ("\nO elemento esta no vetor");
    }
    
    else {
        printf ("\nO elemento nao esta no vetor");
    }
    
    insertionSort(vetor, tam);
    printf("\n\n");
    imprime(vetor, tam);

    return 0;
}

