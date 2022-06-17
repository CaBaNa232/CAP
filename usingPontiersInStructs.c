//Esse código faz um uso simples de ponteiros em estruturas
#include <stdio.h>

//Definição da struct horario
typedef struct {
    int hora;
    int minuto;
    int segundo;
      
}horario;
  
int main()
{
    //Declarações locais
    horario agora, *depois;
    depois = &agora; //O ponteiro depois recebe o endereço de agora
  
    //Atribuindo valores para horas, minutos e segundo
    depois->hora = 20;
    depois->minuto = 51;
    depois->segundo = 52;
    
    //Impressão dos resultados utilizando a variavel agora
    printf("Utilizando a variavel agora: ");
    printf("%d:%d:%d",agora.hora, agora.minuto, agora.segundo);

    //Impressão dos resultados utilizando do ponteiro depois
    printf("\n\nUtilizando o ponteiro depois: ");
    printf("%d:%d:%d", depois->hora, depois->minuto, depois->segundo);

    return 0;
}
