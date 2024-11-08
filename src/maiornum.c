#include <stdio.h>
#include "../lib/atividade1.h"

int main(){
    int n1;
    int n2;
    int rs;

    printf("Digite um número \n");
    scanf("%d", &n1);
    printf("Digite outro número \n");
    scanf("%d", &n2);

    printf("O maior número digitado é %d\n",maiornumero(n1,n2));

    return 0;

}