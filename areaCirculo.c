//Esse códgio calcula a área de um círculo
#include <stdio.h>

//Definindo a constatante PI
#define pi 3.14159 

int main()
{
    float area, raio;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    area = pi * (raio * raio);
    
    printf("A= %.4f", area);

    return 0;
}

