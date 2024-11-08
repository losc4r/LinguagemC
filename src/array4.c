#include <stdio.h>
    int main (){
    
    int pares [] = {33,8,7,11,54,77,13,16};
    int p;
    

    for (p = 0 ; p <= 7 ; p++){
        if(pares [p] % 2 == 0){
            
    

            printf("%d\n",pares[p]);
        
        }

    }

    return 0;

    }