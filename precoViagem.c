//Esse código calcula a quantidade de combustível em uma viagem e a quantida em R$ de combustível
#include <stdio.h>

int main()
{
    float km_total, km_litro, preco_combustivel, total_litro,total_preco;
    
    printf("Digite a quantidade de KM da viagem: ");
    scanf("%f", &km_total);
    
    printf("Digite a quantidade de KM por litro: ");
    scanf("%f", &km_litro);
    
    printf("Digite o preco do combustivel: ");
    scanf("%f", &preco_combustivel);
    
    total_litro = km_total / km_litro;
    total_preco = total_litro * preco_combustivel;
    
    printf("\nTotal de litros = %2.1f L", total_litro);
    printf("\nPreco total =  %2.2f", total_preco);
    
    return 0;
}
