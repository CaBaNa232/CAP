/*Esse código faz a média de 4 notas, caso o aluno fique em recuperação, o 
mesmo pode fazer mais uma prova, caso a media seja >= 5 (Aprovado) se não (Reprovado).
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, n5, media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
  
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
  
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
  
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
  
    if(media >= 7)
    {
        printf("Aluno aprovado\n");  
    }
  
    else if(media >= 5 && media < 7 ){
      
      printf("Media: %.1f\n", media);
      printf("Aluno em exame\n");
      printf("Nota do exame");
      scanf("%f", &n5);
      media = (media + n5) / 2;
   
      if(media >= 5)
      {
        printf("Aluno aprovado\n"); 
        printf("Mídia final  %.1f", media);
      }
      else
      {
          printf("Mídia final: %.1f",media);
          printf("ALuno reprovado\n");
      }
      
  } 
    else
    {
      printf("Mídia final: %.1f\n",media);
      printf("Aluno reprovado\n");
    }
  
    return 0;
}


