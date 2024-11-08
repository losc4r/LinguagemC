#include <stdio.h>

int main(){
    float s1, vt, inss, fgts, desconto, s2;

printf("Digite o seu salario\n");
scanf("%f",&s1);

vt = s1 * 0.06;
inss = s1 * 0.07;
fgts = s1 * 0.08;

desconto = vt + inss + fgts;

s2 = s1 - desconto;

printf("O seu desconto é de %2.f\n", desconto);
printf("O seu salario liquido é %2.f\n", s2);


return 0;


}