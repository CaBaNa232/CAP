//Prova 
#include <stdio.h>

//Definição da struct
typedef struct {
    float temp;
    float pressao;
    float umidade;
  } coleta;


int main ()
{
  //Declarações locais e inicializações
  int tam = 100;
  int i;
  float soma_temp = 0, soma_pressao = 0, soma_umidade = 0;
  float media_temp, media_pressao, media_umidade;

//Criando um vetor com tamanho tam e do tipo coleta 
coleta dados[tam];

//Inicializando o vetor
for (i = 0; i < tam; i++)
  {
    printf ("Digite os dados do ponto %d\n", i + 1);

    printf ("Digite a temperatura: ");
    scanf ("%f", &dados[i].temp);

    printf ("Digite a pressao: ");
    scanf ("%f", &dados[i].pressao);

    printf ("Digite a umidade: ");
    scanf ("%f", &dados[i].umidade);

    printf ("\n\n");

    //Variáveis contadoras utilizadas para o calculo da média posteriormente
    soma_temp += dados[i].temp;
    soma_pressao += dados[i].pressao;
    soma_umidade += dados[i].umidade;
  }
    
  //Media de temperatura, pressão e humidade
  media_temp = soma_temp / tam;
  media_pressao = soma_pressao / tam;
  media_umidade = soma_umidade / tam;

  printf ("\n\n");
  printf ("\nMedia de temperatura: %2.2f", media_temp);
  printf ("\nMedia de pressãoo: %2.2f", media_pressao);
  printf ("\nMedia de umidade: %2.2f", media_umidade);

  return 0;
}



