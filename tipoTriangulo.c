#include <stdio.h>

int main()
{
    float l1, l2, l3;
    
    printf("Digite a medidado lado 1: ");
    scanf("%f", &l1);
    
    printf("Digite a medidado lado 2: ");
    scanf("%f", &l2);
    
    printf("Digite a medidado lado 3: ");
    scanf("%f", &l3);
    
    if(l1 == l2 == l3)
    {
        printf("\nTriangulo equilatero");
    }
    else if(l1 == l2 || l2 == l3 || l3 == l1){
        printf("\nTriangulo isoceles");
    }
    else
    {
        printf("\nTriangulo escaleno");
    }

    return 0;
}

