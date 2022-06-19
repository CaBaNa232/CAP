#include <stdio.h>

struct hr {
    int hora;
    int min;
    int seg;
};

struct hr teste (struct hr agora){
    agora.hora = 25;
    agora.min = 02;
    agora.seg = 77;
    printf("%d:%d:%d", agora.hora, agora.min, agora.seg);
    
    return agora;
}

int main()
{
    
    struct hr agora;
    agora.hora = 10;
    agora.min = 05;
    agora.seg = 25;
    
    printf("%d:%d:%d", agora.hora, agora.min, agora.seg);
    
    printf("\n");
    teste(agora);
    printf("\n");
    
    printf("%d:%d:%d", agora.hora, agora.min, agora.seg);
    

    return 0;
}
