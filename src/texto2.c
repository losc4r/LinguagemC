#include <stdio.h>

int main (){

    char nome [20];
    printf("Digite seu primeiro nome e tecle Enter\n");
    // Foi necessário utilizar o colchetes para que o comando scanf recebea toda a cadeia de caracteres
    // O elemento ^ foi usado para indicar onde começa o primeiro caracter
    // O comando \n neste caso está sendo usado para ler o espaçamento aplicado ao final é utilizado o carcter s (string)
    scanf("%[^\n]s",&nome);

    printf("Olá, %s. Seja Bem Vindo\n", nome);
    
    return 0;
}