//Esse código utiliza ponteiros em structs para exemplificar o cuidado com o uso dos mesmos!
#include <stdio.h>

typedef struct {
    int hora;
    int min;
    int seg;
} hr;

hr teste ( hr *agora)
{
    agora->hora = 25;
    agora->min = 02;
    agora->seg = 77;
    printf("%d:%d:%d", agora->hora, agora->min, agora->seg);
    
    return *agora;
}

int main()
{
    
    hr agora;
    agora.hora = 10;
    agora.min = 05;
    agora.seg = 25;
    
    printf("%d:%d:%d", agora.hora, agora.min, agora.seg);
    
    printf("\n");
    teste(&agora);
    printf("\n");

    //Valor de agora será sobrescrito
    printf("%d:%d:%d", agora.hora, agora.min, agora.seg);
    

    return 0;
}
