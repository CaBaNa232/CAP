#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, delta;
    
    printf("Digite o coeficiente A: ");
    scanf("%f", &a);
    
    printf("Digite o coeficiente B: ");
    scanf("%f", &b);
    
    printf("Digite o coeficiente C: ");
    scanf("%f", &c);
    
    if(a != 0){
        
        printf("\nEquacao valida");
        delta = pow(b, 2) - (4 * a * c);
        
        if(delta == 0)
        {
            printf("\nDuas raizes reais e iguais");
            printf("\nDelta = %f", delta);
            r1 = (-b + sqrt(delta)) / (2 * a);
            r2 = (-b - sqrt(delta)) / (2 * a);
            
            printf("\n\nRaiz 1 = %2.2f", r1);
            printf("\n\nRaiz 2 = %2.2f", r2);
        }
        
        else if(delta > 0)
        {
            printf("\nDuas raizes reais e distintas");
            printf("\n\nDelta = %2.2f" ,delta);
            r1 = (-b + sqrt(delta)) / (2 * a);
            r2 = (-b - sqrt(delta)) / (2 * a);
            
            printf("\n\nRaiz 1 = %2.2f", r1);
            printf("\n\nRaiz 2 = %2.2f", r2); 
        }
        else
        {
            printf("\nNao existem raizes reais");
            printf("\nDelta = %2.2f", delta);
        }
    }

    else
    {
        printf("\nEquação inválida");  
    }
    
    return 0;
}


