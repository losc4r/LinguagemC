#include <stdio.h>

int main(){
    // O tipo float é para trabalhar com casas decimais //
    float n1, n2, soma, divisao;

    printf ("Digite um número e tecle ENTER:\n");
    scanf ("%f",&n1);

    printf ("Digite outro número e tecle ENTER:\n");
    scanf ("%f",&n2);

    soma = n1 + n2;
    divisao = n1 / n2;

    printf("O resultado da soma e %.2f\n",soma); // O .2f é para deixar somente duas casas decimais após a , no resultado//

    printf("O resultado da divisao é %.2f\n",divisao); // O .2f é para deixar somente duas casas decimais após a , no resultado//

    return 0;

}