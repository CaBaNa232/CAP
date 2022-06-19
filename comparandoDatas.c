//Inclusão de bibliotecas
#include <stdio.h>

//Função principal
int main()

{   /*Objetivo:Calcular a duração de um jogo em horas e minutos
    
    Input: Data 1 (dia,mês,ano) e Data 2 (dia,mês,ano)
    Output: Anterior (data 1<data 2), Igual (Data 1 == Data 2) ou Posterior (Data 2> Data 2)
    
    Valores utilizados: 
    Data 1 -24/02/2001 e Data 2- 27/08/2003
    Saída: Posterior
    
    Data 1 -25/07/2003 e Data 2- 25/07/2003
    Saída: Igual
    
    Data 1 -25/10/2020 e Data 2- 04/08/2003
    Saída: Posterior
    */
    
    //Declarações locais
    int dia1, mes1, ano1, dia2, mes2, ano2, data1, data2;
    
    printf("Digite a primeira data\n");   //Entrada da primeira data
    printf("Digite o dia: ");   //Entrada do dia
    scanf("%d", &dia1);
    
    printf("Digite o mes: ");   //Entrada do mês
    scanf("%d", &mes1);
    
    printf("Digite o ano: ");   //Entrada do ano
    scanf("%d", &ano1);
      
    data1 = dia1 + mes1 + ano1;   //Atribuindo as entradas à variàvel data1
    
    
    printf("\n\n");
    
    
    printf("Digite a segunda data\n");   //Entrada da primeira data
    printf("Digite o dia: ");   //Entrada do dia
    scanf("%d", &dia2);
    
    printf("Digite o mes: ");   //Entrada do mês
    scanf("%d", &mes2);
    
    printf("Digite o ano: ");   //Entrada do ano
    scanf("%d", &ano2);
    
    data2 = dia2 + mes2 + ano2;   //Atribuindo as entradas à variàvel data2
    
    
    if(data1 < data2)
    {    // Data 1 anterior à Data 2
        printf("\nAnterior");
    }
    
    else if (data2 < data1)
    {    //Data 2 posterior à Data 1
       printf("\nPosterior"); 
    }
    else   //Data 1 igual Data 2
    {
        printf("\nIgual");
    }
    

    return 0;
    //Fim do progrma
}

