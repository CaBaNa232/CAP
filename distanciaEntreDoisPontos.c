//Esse código calcula a distaância entre dois pontos quaisquer
#include <stdio.h>
#include <math.h>


typedef struct {
    
    float x;
    float y;
    
} pt;

float dist (pt pt1, pt pt2)
{ 
    float dt;
    dt = sqrt(pow (pt2.x - pt1.x, 2) + pow (pt2.y - pt1.y, 2));
    
    return (dt);
}

int main()
{

    float d;
    pt pt1, pt2;
    
    printf("Digite as coordenadas do 1 ponto: ");
    scanf("%f %f", &pt1.x, &pt1.y);
    
    printf("Digite as coordenadas do 2 ponto: ");
    scanf("%f %f", &pt2.x, &pt2.y);
 
    d = dist(pt1, pt2);
    
    printf("\nA distancia entre os 2 pontos = %.2f", d);
    
    return 0;
}


