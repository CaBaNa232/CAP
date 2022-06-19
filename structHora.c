#include <stdio.h>

//Definição da estrutura
typedef struct {
    int hora;
    int min;
    int seg;
} hora;

    hora proxima(hora x){
    
    //Alterando os valores
    x.hora = 10;
    x.min = 25;
    x.seg = 01;
 
     printf("%d : %d : %d",x.hora,x.min,x.seg);
    
    return x;
}

int main()
{
    //Variavel do tipo hora
     hora ag;
    
    //Atribuindo valores
    ag.hora = 21;
    ag.min = 33;
    ag.seg = 35;
    
    //Exibindo valores
    printf("%d : %d : %d", ag.hora, ag.min, ag.seg);
    
    printf("\n");
    
    //Chama de função
   proxima(ag);
  

    return 0;
}

