#include <stdio.h>

int x;
 
void troca()
{
    x = 6;
    int y = 4;
    printf("\nX no procedimento: %d\nY no procedimento: %d", x, y);
}

int main()
{
    x = 5;
    int y = 3;
    
    printf("X na main: %d \nY na main: %d", x, y);
    printf("\n\n");
    
    troca();

    printf("\n\n");

    printf("\nX depois do procedimento: %d\nY depois do procedimento: %d", x, y);
    
    return 0;
}
