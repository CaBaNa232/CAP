/******************************************************************************

O programa a seguir é uma versão simplificada, via linha de comando, do jogo
Tic-Tac-Toe.

*********************/
#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define TAM 3


/*
A função a seguir, inicializa o tabuleiro de jogo com ' ' para indicar que todo
tabuleiro está vazio.
*/
void inicializa(char tabuleiro[TAM][TAM]) {
    int i, j;
    int cont = 1;
    for(i = 0; i < TAM; i++) 
        for(j = 0; j < TAM; j++)
            tabuleiro[i][j] = '0' + cont++;
}

/*
A função a seguir verifica se ainda é possível fazer jogada. Retorna 1 se 
ainda há posição vazia e 0 se não há mais posições para jogar.
*/
int tem_vazio(char tabuleiro[TAM][TAM]) {
    int i, j;
    int achou = 0;
    for(i = 0; i < TAM && !achou; i++) 
        for(j = 0; j < TAM && !achou; j++)
            if (tabuleiro[i][j] != JOGADOR_X && tabuleiro[i][j] != JOGADOR_O)
                achou = 1;
    return achou;
}

/*
A função a seguir verifica se ainda houve ganhador. Se houve ganhador retorna o
símbolo do jogador que ganhou o jogo, caso contrário retorna 0 para indicar 
empate.
*/
char ganhador(char tabuleiro[TAM][TAM]) {
    int i, j;
    char ganhador = 0;

    /* avalia ganhador nas linhas */
    for(i = 0; i < TAM && !ganhador; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] )
            ganhador = tabuleiro[i][0];
    }

    /* avalia ganhador nas colunas */
    for(i = 0; i < TAM && !ganhador; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] )
            ganhador = tabuleiro[0][i];
    }

    /* avalia ganhador na diagonal principal*/
    if (!ganhador && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        ganhador = tabuleiro[1][1];

    /* avalia ganhador na diagonal secundaria*/
    if (!ganhador && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        ganhador = tabuleiro[1][1];

    return ganhador;
}

/*
A função a seguir, recebe de argumento o tabuleiro do jogo, o símbolo usado
pelo jogador que fará a jogada e a posição desejada do tabuleiro.

Se a jogada puder ser realizada, a função retorna o caracter utilizado pelo 
jogador. Se a posição escolhida já estiver ocupada a função retorna 0.

Uma jogada só é permitida se a celula na posição escolhida não contiver o símbolo
'X' ou 'O', representados pelas constantes, JOGADOR_X e JOGADOR_O, respectivamente.
*/

char jogada(char tabuleiro[TAM][TAM], char simbolo, int posicao) {
    char retorno = 0;
    switch(posicao) {

        case 1: if (tabuleiro[0][0] != JOGADOR_X && tabuleiro[0][0] != JOGADOR_O) {
                tabuleiro[0][0] = simbolo;
                retorno = simbolo;
            }
            break;

        case 2: if (tabuleiro[0][1] != JOGADOR_X && tabuleiro[0][1] != JOGADOR_O) {
                tabuleiro[0][1] = simbolo;
                retorno = simbolo;
            }
            break;

        case 3: if (tabuleiro[0][2] != JOGADOR_X && tabuleiro[0][2] != JOGADOR_O) {
                tabuleiro[0][2] = simbolo;
                retorno = simbolo;
            }
            break;

        case 4: if (tabuleiro[1][0] != JOGADOR_X && tabuleiro[1][0] != JOGADOR_O) {
                tabuleiro[1][0] = simbolo;
                retorno = simbolo;
            }   
            break;

        case 5: if (tabuleiro[1][1] != JOGADOR_X && tabuleiro[1][1] != JOGADOR_O) {
                tabuleiro[1][1] = simbolo;
                retorno = simbolo;
            }
            break;

        case 6: if (tabuleiro[1][2] != JOGADOR_X && tabuleiro[1][2] != JOGADOR_O) {
                tabuleiro[1][2] = simbolo;
                retorno = simbolo;
            }   
            break;

        case 7: if (tabuleiro[2][0] != JOGADOR_X && tabuleiro[2][0] != JOGADOR_O) {
                tabuleiro[2][0] = simbolo;
                retorno = simbolo;
            }
            break;

        case 8: if (tabuleiro[2][1] != JOGADOR_X && tabuleiro[2][1] != JOGADOR_O) {
                tabuleiro[2][1] = simbolo;
                retorno = simbolo;
            }
            break;
            
        case 9: if (tabuleiro[2][2] != JOGADOR_X && tabuleiro[2][2] != JOGADOR_O) {
                tabuleiro[2][2] = simbolo;
                retorno = simbolo;
            }
            break;
    }
    return retorno;
}

/*
A função a seguir imprime a matriz do jogo e pode ser utilizada a cada jogada
para mostrar o status do jogo para os jogadores.
*/
void imprime_tabuleiro(char tabuleiro[TAM][TAM]) {
    int i, j;
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            if (j != 2)
                printf(" %c |", tabuleiro[i][j]);
            else
                printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
        if (i != 2)
            printf("---+---+---\n");
    }
}


int main()
{
    char tabuleiro[TAM][TAM];
    char jogador_ativo = JOGADOR_X;
    char novo_jogo = 'n';
    char ganhou;
    char jogada_atual;
    int posicao;
    
    do {
        printf("\nTic-Tac-Toe\n\n");
        inicializa(tabuleiro);
        
        do {
            imprime_tabuleiro(tabuleiro);
            do {
                printf("\nJogador %c digite a posicao que deseja jogar: ", jogador_ativo);
                scanf("%d", &posicao);
                printf("\n");
                jogada_atual = jogada(tabuleiro, jogador_ativo, posicao);
            } while (jogada_atual == 0);
            
            /* Troca jogador */
            if (jogador_ativo == JOGADOR_X) 
                jogador_ativo = JOGADOR_O;
            else
                jogador_ativo = JOGADOR_X;
            
            /* verifica se já tem ganhador */
            ganhou = ganhador(tabuleiro);
            
        } while(!ganhou && tem_vazio(tabuleiro));
        
        imprime_tabuleiro(tabuleiro);
        
        /* Encerrado o jogo, verifica se houve ganhador */
        if (ganhou == JOGADOR_X || ganhou == JOGADOR_O) {
            printf("\nO jogador %c venceu o jogo\n", ganhou );
        } else {
            printf("\nO jogo nao teve ganhador\n");
        }
        
        printf("\n\nDeseja jogar novamente? ");
        scanf("\n%c", &novo_jogo);
    } while(novo_jogo == 's' || novo_jogo == 'S' );
    
    return 0;
}