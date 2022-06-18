// Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*
Nome: peso_ideal
Objetivo: Calcular o peso ideal de uma peso_ideal
Parâmetros formais:
- sexo: Sexo do usuário (parâmetro de entrada de dado)
- altura: Altura do usuário (parâmetro de entrada de dado)
Valor de retorno: Peso ideal do usuário
*/

float peso_ideal (char sexo, float altura){
    
    float peso_i;
    switch (toupper(sexo)){
        case 'F':
            peso_i = (altura * 62.1) - 44.7;
            break;
        
        case 'M':
            peso_i = (altura * 72.7) - 58;
            break;
        
        default:
            printf("\nOpção inválida");
        break;
        
    }
    return peso_i;
}

int main()
{
    // Declarações locais
    char sexo;
    float altura;
    float peso_i;
    
    // Entrada do sexo
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    
    // Entrada da altura
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    // Chamada da sub-rotina (procedimento)
    peso_i = peso_ideal(sexo, altura);
    printf("\nPeso ideal: %2.2f", peso_i);

    return 0;
}