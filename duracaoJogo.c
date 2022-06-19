//Inclusão de bilbiotecas
#include <stdio.h>

//Função principal
int main()
{
   /*
     Objetivo:Calcular a duração de um jogo em horas e minutos
    
     Input: hora inicial, minuto inicial, hora final e minuto final de um jogo
     Output: Duração de um jogo.
    
     Valores utilizados: 
    
     Entradas: 7,8,9,10   Saída: O jogo durou 2 Hora(s) e 2 minutos(s)
     Entradas: 7,7,7,7    Saída: O jogo durou 24 Hora(s) e 0 minutos(s)
     Entradas: 7,10,8,9   Saída: O jogo durou 0 Hora(s) e 59 minutos(s)
    */


    //Declarações locais
    int hr_in, min_in, hr_fin, min_fin, hr_total, min_total;
    
    printf("Digite a hora incial: "); //Entrada da hora inicial
    scanf("%d", &hr_in);
    
    printf("Digite o minuto incial: "); //Entrada do minuto inicial
    scanf("%d", &min_in);
    
    printf("\n");
    
    printf("Digite a hora final: "); //Entrada da hora final
    scanf("%d", &hr_fin);
    
    printf("Digite o minuto final: "); //Entrada do minuto final
    scanf("%d", &min_fin);
    

    if(hr_in == hr_fin - 1)
    {
        hr_total = 0;
        min_total = 60 - ((min_fin-min_in)*-1);
        
    }
    else if(hr_in == hr_fin && min_in == min_fin)
    {
        hr_total=24;
    }
        
    
    else
    {
        hr_total = hr_fin - hr_in; //Cálculo do total de horas
        min_total =  min_fin - min_in; //Cálculo do total de minutos
    } 
   
       
    
    printf("O jogo durou  %d Horas(s) e %d Minutos(s)", hr_total,min_total); //Saída da duração do jogo
    

    return 0;
    //Fim do programa
}
