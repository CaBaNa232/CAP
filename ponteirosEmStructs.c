//Exemplo simples da utilização de ponteiros em structs
#include <stdio.h>

typedef struct { //Definição da estrutura
    int hora, minuto, segundo;
} horario;

int main()
{
   
    horario agora, depois, *pont; //Declarando variáveis do tipo estrutura
   
    agora.hora = 15; //Atribuindo valores
    agora.minuto = 20; //Atribuindo valores
    agora.segundo = 27; //Atriuindo valores
   
    printf("%d : %d : %d", agora.hora, agora.minuto, agora.segundo); //Exibindo os valores atribuidos
   
    //uso do ponteiro
    pont = &agora;
   
    pont->hora = 15; //Atribuindo valores
    pont->minuto = 45; //Atribuindo valores
    pont->segundo = 56; //Atriuindo valores
   
    printf("\n%d : %d : %d", agora.hora, agora.minuto, agora.segundo); //Exibindo os valores atribuidos
   

    return 0;
}
