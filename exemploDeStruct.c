//Exemplo simples do uso de ponteiro em structs
#include <stdio.h>

typedef struct {
    int hora, minuto,segundo;
} horario;

horario teste (horario x){
    
    x.hora = 15;
    x.minuto = 31;
    x.segundo = 25;
    
    
    return x;
}

int main()
{
    horario agora, depois;
    
    agora.hora = 15;
    agora.minuto = 28;
    agora.segundo = 52;
    
    printf("%d : %d : %d", agora.hora, agora.minuto, agora.segundo);
    
    depois = teste(agora);
    printf ("\n");
    
    printf ("%d : %d : %d", depois.hora, depois.minuto, depois.segundo);
    

    return 0;
}
