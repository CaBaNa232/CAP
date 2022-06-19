//Esse código realiza a conversão de graus Celcius para Fahrenheit
#include <stdio.h>

int main()
{
    float celsius,fahrenheit,kelvin;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (1.8 * celsius) + 32;
    kelvin = celsius + 273;
    
    printf("\nTemperatura em Fahrenheit: %2.2f", fahrenheit);
    printf("\nTemperatura em kelvin: %2.2f", kelvin);

    return 0;
}
