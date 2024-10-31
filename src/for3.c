#include <stdio.h>
    int main(){
    int ano;
    int total = 0;

    for (ano= 1930; ano <= 2024; ano++){
        if(ano % 4 == 0){
        printf("O ano de %d é bisexto\n", ano);
        total ++;
        }
    }
        printf("\n--------\n");
    
        printf("A quantidade de anos bissexto é %d\n" ,total);

        return 0;
    
    }



    