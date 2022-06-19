// Inclusão de bibliotecas
#include <stdio.h>
#include<math.h>

int main()
{
    /*Objetivo: Ler 3 valores e determinar: se é possivel formar um triângulo,
    e se possivel, determinar seu tipo
    
    Input: a,b,c
    Output: Forma ou não um triângulo, e caso forme apresentar seu tipo
    
    Valores utilizados: 
   
    
    */
    
    //Declarações locais
    float a, b, c;
    
    printf("Digite os lado em ordem descrente");   //Entrada dos valores em ordem crcente
    printf("\nLado 1: ");
    scanf("%f", &a);
    
   printf("Lado 2: ");
   scanf("%f", &b); 

   printf("Lado 3: ");
   scanf("%f", &c); 
    
    if(a >= b + c)
    {  //Forma triângulo?
        printf("\nNAO FORMA TRIANGULO");
    }
   
   if(pow(a, 2) == pow(b, 2) + pow(c, 2))
   {   //Triângulo retângulo?
       printf("\nTRIANGULO RETANGULO");
   }
   
  else if(pow(a, 2) > pow(b, 2) + pow(c, 2))
    {  //Triângulo obstusangulo?
       printf("\nTRIANGULO OBSTUSANGULO");
    }
  else if(pow(a, 2) < pow(b, 2) + pow(c, 2))
  { //Triângulo acuntângulo
      printf("\nTRIANGULO ACUTANGULO");  
  }
  
  if(a == b && b == c && c == a)
  { //Triângulo equilátero
      printf("\nTRIANGULO EQUILATERO");
  }
  
  else if(a == b || b == c || c == a)
  {  //Triângulo isóceles
      printf("\nTRIANGULO ISOCELES");
  }
    
 
   
    

    return 0;
}

