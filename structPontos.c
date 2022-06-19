#include <stdio.h>

typedef struct {
    char rotulo[25];
    int x;
    int y;
    int z;
} coord;

int main()
{
    coord p;

    printf("Digite o rotulo do ponto: ");
    gets(p.rotulo);

    printf("Digite as coordenadas do ponto: ");
    scanf("%d %d %d", &p.x, &p.y, &p.z);
    
    printf("\nCoordenadas do ponto:\n");
    printf("\nRotulo do ponto: %s", p.rotulo);
    printf("\nX = %d , Y = %d , Z = %d", p.x, p.y, p.z);

    return 0;
}
