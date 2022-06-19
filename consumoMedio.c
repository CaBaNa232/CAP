#include <stdio.h>

int main()
{
    float km_total, qtd_combustivel, cons_medio;
    
    printf("Digite a distancia total em Km: ");
    scanf("%f", &km_total);

    printf("Digite o total de litros gastos: ");
    scanf("%f", &qtd_combustivel);
    
    cons_medio = km_total / qtd_combustivel;
    printf("\n%.2f km/l", cons_medio);

    return 0;
}
