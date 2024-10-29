// Este programa obtem um número do usuario e diz se é par, exibindo uma mensagem na tela //

#include <stdio.h>

int main(){
    int n;

    printf("Digite um número e tecle ENTER\n");
    scanf("%d",&n);

    if( n % 2 == 0){

    printf("O VALOR %d é Par\n");
    
    return 0;
}
