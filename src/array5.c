#include <stdio.h>
    int main (){
    
    int n [] = {13,8,23,95,7,14,10,45,165};

    int p = 0;
    int rs;

        while( p <= 8){
            rs = n[p]+n[p];
            printf("A soma dos valores é %d\n",rs);
            p++;
        }
        return 0;
    }