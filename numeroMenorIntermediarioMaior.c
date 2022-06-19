#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite o 1 numero: ");
    scanf("%d", &a);
    
    printf("Digite o 2 numero: ");
    scanf("%d", &b);
    
    
    printf("Digite o 3 numero: ");
    scanf("%d", &c);
    
    
    if(a > b && a > c)
    
    if(b > c)
    {
        printf("\n%d %d %d", c, b, a);
    }   
    else
    {
        printf("\n%d %d %d", b, c, a);
    }
    
    if(b > a && b > c)
    
    if(a > c){
        printf("\n%d %d %d", c, a, b);
    }
    else{
        printf("\n%d %d %d", a, c, b);
    }
    
    if(c > a && c > b)
    
    if(a > b)
    {
        printf("\n%d %d %d", b, a, c);
    }
    else
    {
        printf("\n%d %d %d", a, b, c);
    }

    return 0;
}
