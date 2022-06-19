#include <stdio.h>
#include<math.h>

struct pts{
    float x;
    float y;
    float z;
    float d;
};

int main()
{
    int i;
    float menor = __INT_MAX__, maior = 0;
    int ind_maior, ind_menor;
    
    struct pts pontos[10];
    
    for(i = 0; i < 10; i++){
        printf("\nDigite o %d ponto: ", i + 1);
        scanf("%f", &pontos[i].x);
        scanf("%f", &pontos[i].y);
        scanf("%f", &pontos[i].z);

        pontos[i].d= sqrt(pontos[i].x * pontos[i].x + pontos[i].y * pontos[i].y + pontos[i].z * pontos[i].z);
    }
    
    for(i = 0; i < 10; i++)
    {
        if(pontos[i].d<menor)
        {
            ind_menor = i;
            menor = pontos[i].d; 
        }
        if(pontos[i].d>maior)
        {
            ind_maior = i;
            maior = pontos[i].d;   
        }
    }
    
    printf("\nMaior distancia = %2.2f\n",maior);
    printf("Coordenadas: X = %2.0f, Y = %2.0f, Z = %2.0f\n", pontos[ind_maior].x, pontos[ind_maior].y, pontos[ind_maior].z);
    
    printf("\nMenor distancia =  %2.2f\n" ,menor);
    printf("Coordenadas: X = %2.0f, Y = %2.0f, Z = %2.0f\n", pontos[ind_menor].x, pontos[ind_menor].y, pontos[ind_menor].z);

    return 0;
}
