//Esse códgio verifica se um valor está ou não na sequência
#include <stdio.h>

int main()
{
    int op, busca, achou;
    achou = 0;
    
    printf ("Digite o elemento de busca: ");
    scanf ("%d", &busca);
    
    printf ("Deseja continuar: ");
    scanf ("%d", &op);
    
    do {
        if (busca == op) {
            achou = 1;
        }
        
        printf ("Deseja continuar: ");
        scanf ("%d", &op);
    }

    while (op != 0);
    
    if (achou == 1) {
        printf ("\nO elemento %d esta na sequencia!", busca);
    }
    else {
        printf ("\nO elemento %d nao esta na sequencia!", busca);
    }
    
    return 0;
}
