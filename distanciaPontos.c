//Esse código calcula a distância entre dois pontos (X,Y)
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float dist;
    
    printf("Digite X e Y do ponto 1");

    printf("\nX = ");
    scanf("%f", &x1);

    printf("Y = ");
    scanf("%f", &y1);
    
    printf("\nDigite X e Y do ponto 2");

    printf("\nX = ");
    scanf("%f", &x2);

    printf("Y = ");
    scanf("%f", &y2);
    
    dist = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    printf("\nA distancia entre os pontos = %.4f", sqrt(dist));
    


    return 0;
}
