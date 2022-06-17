//Esse programa calcula se um número é ou não primo

#include<stdio.h>

int main()
{

    //Declarações locais e inicialização de variávies
    int i, num,cont = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        //Se o numero for divisel pelo o número da iteração do loop, então incremente o cont
        if(num % i == 0)
        {
            cont = cont + 1;
        }
    }

    //Verificando se  o número possui apenas dois divisores (critério para se primo)
    if(cont == 2)
    {
        printf("O numero e primo");
    }
    else {
        printf("O numero nao e primo");
    }
        
    return 0;
}
