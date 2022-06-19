//Manipulacao  trivial  de  registros (structs)
#include  <stdio.h>
#include  <string.h>
   
    typedef struct {
        char nome [100];
        int  ano_nascimento;
        char genero;
    } pessoa;
    
int  main(){
    
        pessoa voce, eu;
 
    
        strncpy(eu.nome , "Jander  Moreira", sizeof  eu.nome - 1);
        eu.ano_nascimento = 1967; eu.genero = 'M';
        
        printf("Seu nome: ");
        fgets(voce.nome, sizeof  voce.nome , stdin);
        voce.nome[strlen(voce.nome) - 1] = '\0';
        
        printf("Seu genero (M ou F): ");
        scanf("%c%*c", &voce.genero);
        
        printf("Seu ano de nascimento: ");
        scanf("%d", &voce.ano_nascimento);
       
        
        printf("\nEu sou %s (%c)\n", eu.nome, eu.genero);
        
        if(eu.ano_nascimento < voce.ano_nascimento)
        {
             printf("Sou mais velho que %s\n", voce.nome);
        }
        
        if(eu.genero  == voce.genero)
        {
            printf("Temos o mesmo genero\n");
        }
        else
        {
            printf("Temos generos diferentes\n");
        }
        
        return  0;
    
}