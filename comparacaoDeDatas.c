//Inclusão de bibliotecas
#include <stdio.h>

//Função principal
int main()
{
    //Declarações locais
    int dia_1, mes_1, ano_1, dia_2, mes_2, ano_2, data_1, data_2;
    
    printf("Digite a primeira data\n"); //Entrada da primeira data
    
    printf("Digite o dia: "); //Entrada do dia
    scanf("%d", &dia_1);
    fflush(stdin);
    
    printf("Digite o mes: "); //Entrada do mês
    scanf("%d", &mes_1);
    fflush(stdin);
     
    printf("Digite o ano: "); //Entrada do ano
    scanf("%d", &ano_1);
    fflush(stdin);
    
    data_1 = dia_1 + mes_1 +ano_1;  //Atribuindo as entradas à variàvel data_1
    
    printf("\n\n");
    
    
    printf("Digite a segunda data\n"); //Entrada da primeira data
    
    printf("Digite o dia: "); //Entrada do dia
    scanf("%d", &dia_2);
    fflush(stdin);

    printf("Digite o mes: "); //Entrada do mês
    scanf("%d", &mes_2);
    fflush(stdin);
    
    printf("Digite o ano: "); //Entrada do ano
    scanf("%d", &ano_2);
    fflush(stdin);
    
    data_2 = dia_2 + mes_2 + ano_2;  //Atribuindo as entradas à variàvel data_2
    
    
   if(dia_1 > dia_2 || mes_1 > mes_2 || ano_1 > ano_2) {
    printf("\nSegunda data e posterior");
   }
    else {
        printf("\nData iguais");
    }
    

    return 0;
    //Fim do progrma
}

