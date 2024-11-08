#include <stdio.h>

int main(){
    int mes;
    printf("Digite o mês para saber a qual estação ele pertence e pressione ENTER\n");
    scanf("%d", &mes);

// || significa "ou" //

    if (mes == 12 || mes == 1 || mes == 2){
        printf("A estação desse mês é Verão\n");
    }  
    else if (mes == 3 || mes == 4 || mes == 5){
        printf("A estação desse mês é Outono\n");
    }
    else if (mes == 6 || mes == 7 || mes == 8){
        printf("A estação desse mês é Inverno\n");
    }
    else if (mes == 9 || mes == 10 || mes == 11){
        printf("A estação desse mês é Primavera\n");
    }
    else {
        printf("Esse mês não existe\n");
    }
    return 0;
    }