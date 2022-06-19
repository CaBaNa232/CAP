//Esse código conta a quantidade de vogais e consoantes em uma palavra
#include <stdio.h>

int main()
{
  char cadeia[30];
  int i, tam, contc = 0, contv = 0;

 
  
  printf("Digite a palavra: ");
  gets(cadeia);
  tam = strlen(cadeia);
    
    for(i = 0; i < tam; i++)
    {
        if(cadeia[i] == 'a' || cadeia[i] == 'e' || cadeia[i] == 'i' || cadeia[i] == 'o' || cadeia[i] == 'u'){
            contv ++;
        }
        else {
          contc += 1;
        }
        
    }
        
  printf("\nA quantidade de vogais = %d", contv);
   printf("\nA quantidade de consoantes = %d", contc);

    return 0;
}
