//Esse código mostra a utilização de ums struct, utlizando um exmplo básico com ponteiros

#include<stdio.h>
#include<stdlib.h>

//Definição da estrutura
struct teste {  
    int horas, minutos, segundo;
};
typedef struct teste horario;

int main()
{
    //Declaração da variável hora e um ponteito *pont do tipo horario
    horario hora, *pont; 

    //Recebendo as horas
    printf("Digite as horas: ");
    scanf("%d", &hora.horas);

    //Recebendo os minutos
    printf("Digite os minutos: ");
    scanf("%d", &hora.minutos);

    //Recebendo os segundos
    printf("Digite os segundos: ");
    scanf("%d", &hora.segundo);
    
    //Impressão do 'horário'
    printf("\nHorario: %d:%d:%d", hora.horas,hora.minutos,hora.segundo);

    //Utilizando o ponteiro
    pont = &hora; 
    pont->horas = 14; //Acessando o campo por meio do operador ->
    pont->minutos = 25;
    pont->segundo = 10;

    //Impressão dos novos valores alterados pelo ponteiro
    printf("\nHorario: %d:%d:%d", hora.horas, hora.minutos, hora.segundo);
  
 
    return 0;
}