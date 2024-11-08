int somaarray(int n[], int qtd){
    int result = 0;
    int posit;
    for (posit = 0; posit < qtd; posit ++){
        result += n[posit];
    }
return result;
}


int mediaarray(int n[], int qtd){
    int result = 0;
    int posit;
    for (posit = 0; posit < qtd; posit ++){
        result += n[posit];
    }
return result/qtd;
}

int maiorvalor(int n[], int qtd){
    int maior = n[0];
    int in ;
    for (in = 1 ; in < qtd ; in++){
        if(n[in]>maior){
            maior = n[in];

        }
    }

    return maior;
}
