#include <stdio.h>

int main(){
    
    int n;
    printf("Digite um número e tecle ENTER\n");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("O núemro %d é par\n");
    }
    else { 
        printf("O número %d é Impar\n");
    }

    return 0;     
}