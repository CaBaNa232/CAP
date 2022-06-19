//Esse códgio realiza o calculo do volume de uma esfera
#include <stdio.h>
#include<math.h>

#define pi  3.14159

int main()
{
    float raio, volume;
    
    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    volume = (4 / 3.0) * pi * pow(raio, 3);
    printf("\nVolume = %.3f", volume);

    return 0;
}
