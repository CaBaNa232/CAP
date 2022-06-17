//Esse código realiza o calculo de um retângulo

#include <stdio.h>
#include<stdlib.h>

//Função para calcular a área do retangulo
float areaRetangulo(float x, float y) {

    //Recebe dois parâmetro x e y (altura e largura) ,respectivamente.
    float area; 
    //Área recebe o produto de x (altura) e y (largura)
    area = x * y;
    
    //O valor é retornado
    return area;
}

int main()
{

    //Declrações locais
    float altura, largura;
    
    //Recebendo a altura
    printf("Digite a altura do retangulo: \n");
    scanf("%f", &altura);
 
    //Recebendo a largura
    printf("Digite a largura do retangulo: \n");
    scanf("%f", &largura);
    
    //A variável area recebe o retorno da função areaRetangulo
    float area = areaRetangulo(altura, largura);
    printf("\nA area e: %2.2f", area);
   

    return 0;
}