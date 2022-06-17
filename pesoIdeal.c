//Esse código faz o cálculo do peso ideal de um indivíduo

#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Declaração da função peso_ideal
void peso_ideal(char sexo, float altura) {

    //Declarações locais
    float peso_ideal;
    
    //Switch para o usuário escolher o sexo (toupper transforma caracteres em maiúsculo)
    switch(toupper(sexo))
    {
        case 'F': peso_ideal = altura * 62.1 - 44.7; //Caso for mulher
            break;
            
        case 'M': peso_ideal = altura * 72.7 - 58; //Caso for homen
            break;
            
        default:
            printf("Sexo inválido | Digite F ou M"); //Se o sexo digitado não for válido
            break;
        
    }
    //Como é um procedimento(não há retorno) então o peso ideal é exibido ao fim da execução da função
    printf("O peso ideal e: %3.2f", peso_ideal);
    
}

int main()
{
    //Declarações locais
    char sexo;
    float altura;
    
    //Recebendo o sexo
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    
    //Recebendo a altura
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    //Chamada da função
    peso_ideal(sexo, altura);
    
    return 0;
}