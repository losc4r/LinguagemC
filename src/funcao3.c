#include <stdio.h>
#include "../lib/calculos.h" 
// o comando ../ faz a saida da pasta atual /src e /lib é onde está o arquivo de cabeçalho "calculos.h" //

int main(){
    int valores [] = {4,9,8,4,58,95,47,100};
    printf("O Resultado da soma é %d\n", somaarray (valores,8));
    printf("O Resultado da média é %d\n", mediaarray (valores,8));
    printf("O Maior valor é %d\n", maiorvalor (valores,8));
    return 0;
}