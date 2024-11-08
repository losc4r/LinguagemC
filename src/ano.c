#include <stdio.h>

int main(){
        int n;
    printf("Digite um ano para ver se é bissexto e tecle ENTER\n");
    scanf("%d",&n);

    if(n % 4 == 0){
        printf("O ano de %d é bissexto\n");
    }
    else { 
        printf("O ano de %d não é bissexto\n");
    }

    return 0;     
}