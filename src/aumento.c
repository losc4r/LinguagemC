#include <stdio.h>
#include "../lib/atividade1.h"

int main(){

    float sal;
    printf("Digite o salário do funcionário:\n");
    scanf("%f",&sal);
    reajuste(sal);
}