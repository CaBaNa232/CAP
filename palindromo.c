#include <stdio.h> //Inclusão de bibliotecas

int palindromo (int numero) { //Recebe um número inteiro como parâmetro e retorna um inteiro
    int numero_original = numero; //Cópia da várivavel
    int reverso_numero = 0; //Contador
    
    while (numero > 0) { //Se o número inserido for maior que zero
        int digito = numero % 10; //Digito recebe o módulo da divisão do número
        reverso_numero = reverso_numero * 10 + digito; //O contador mais o módulo da divisão por 10
        numero /= 10; //O numero vai ser igual o valor da divisão inteira de numero
    }
    
    return numero_original == reverso_numero;
}

int main() {
    int n; //Declarações iniciais
    printf("Digite um numero: ");
    scanf("%d", &n); 
    
    if (palindromo(n)) { // Invocando a função
        printf("%d e um numero palindromo.\n", n); //Palindromo
    } else {
        printf("%d nao e um numero palindromo.\n", n); //Não é palindromo
    }
    
    return 0;
}