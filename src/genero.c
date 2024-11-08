#include <stdio.h>
#include "../lib/atividade1.h"

int main(){

    char letra;
    printf ("Digite M para Masculino e ou F para Feminino e tecle ENTER\n");
    scanf ("%c",&letra);
    genero (letra);

    return 0;
}
