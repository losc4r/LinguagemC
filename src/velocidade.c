#include <stdio.h>

int main(){
float n1, n2, n3, n4, media;

printf("Digite o KM Inicial e tecle ENTER\n");
scanf("%f", &n1);

printf("Digite o KM final e tecle ENTER\n");
scanf("%f", &n2);

printf("Digite o tempo inicial e tecle ENTER\n");
scanf("%f", &n3);

printf("Digite o tempo final e tecle ENTER\n");
scanf("%f", &n4);

media = (n2 - n1) / (n4 - n3);

printf ("A velocidade media é %.2f\n", media);

return 0;


}