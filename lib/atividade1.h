#include <stdio.h>
int maiornumero(int n1, int n2){

    int rs;


    if(n1 > n2){
        rs=n1;
    }

    else {
        rs = n2;
    }

    return rs;

    }

//  OU PODE SER FEITO ASSIM 

// int maior (int n1, int n2){
// int rs = n1;
// if(n2 > n1){
// rs = n2;
// }
// return rs; 
// }


char genero (char letra){
    
    if (letra == 'M' || letra == 'm'){
        printf ("Masculino\n");
    }

    else if (letra == 'F' || letra == 'f'){
        printf ("Feminino\n");
    }

    else {
        printf ("Sexo Invalido\n");
    }    
}

void vogal (char letra){
    if (letra == 'a'){
        printf("A é vogal");
    }
    else if (letra == 'e'){
        printf ("E é vogal");
    }
    else if (letra == 'i'){
        printf ("I é vogal");
    }
    else if (letra == 'o'){
        printf ("O é vogal");
    }
    else if (letra == 'u'){
        printf ("U é vogal");
    }
    else {
        printf ("%c é vogal", letra);
    }
}

// PODE FAZER ASSIM TBM

void vogal1(char letra){
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        printf ("%c é consoante", letra);
    }
    else{
        printf ("A letra digitada é consoante");
    }
}

void reajuste (float salario){
    float valor_aumento;
    float novo_salario;
    if (salario <= 280){
        valor_aumento = salario * (20.0 / 100);
        novo_salario = salario + valor_aumento;
        printf ("O salário antigo é %2.f e foi reajustado em 20%. O valor de aumento é %2.f e o novo salário é %2.f\n", salario,valor_aumento,novo_salario);
    }

    else if(salario <= 700){
        valor_aumento = salario * (15.0 / 100);
        novo_salario = salario + valor_aumento;
        printf ("O salário antigo é %2.f e foi reajustado em 15%. O valor de aumento é %2.f e o novo salário é %2.f\n", salario,valor_aumento,novo_salario);
    }

    else if(salario <= 1500){
        valor_aumento = salario * (10.0 / 100);
        novo_salario = salario + valor_aumento;
        printf ("O salário antigo é %2.f e foi reajustado em 10%. O valor de aumento é %2.f e o novo salário é %2.f\n", salario,valor_aumento,novo_salario);
    }
    else{
        valor_aumento = salario * (5.0 / 100);
        novo_salario = salario + valor_aumento;
        printf ("O salário antigo é %2.f e foi reajustado em 5%. O valor de aumento é %2.f e o novo salário é %2.f\n", salario,valor_aumento,novo_salario);
    }
}