#include <stdio.h>

int main(){
float n1, n2, n3, n4, media;

printf("Digite a nota de Matematica e tecle ENTER\n");
scanf("%f", &n1);

printf("Digite a nota de Portugues e tecle ENTER\n");
scanf("%f", &n2);

printf("Digite a nota de Ciencias e tecle ENTER\n");
scanf("%f", &n3);

printf("Digite a nota de Historia e tecle ENTER\n");
scanf("%f", &n4);

media = (n1 + n2 + n3 + n4) / 4;

printf ("A media das notas é %.2f\n", media);

return 0;


}