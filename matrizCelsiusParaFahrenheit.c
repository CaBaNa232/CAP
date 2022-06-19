/*Esse código é uma matriz que possui 2 linha, sendo que na primeira a temperatura vai de 0 a 10,
 e na segunda linha é a temperatura de 1 a 10 em Fahrenheit */
#include <stdio.h>


int main()
{
    int i, j;
    float mat[2][10];
    
    for(j = 0; j < 10; j++){
        mat[0][j]= j + 1;
        mat[1][j] = (j + 1) * (9.0 / 5.0) + 32 ;
    }

    for(i = 0; i < 2 ; i++) {
        printf("\n ");
        
        for(j = 0; j < 10; j++){
            printf("%2.2f  ", mat[i][j]);
        }
    }
    
    
    return 0;
}


