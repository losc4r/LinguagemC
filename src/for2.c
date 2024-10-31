#include <stdio.h>
    int main(){
    
    int num;
    for (num= 1; num <= 2000; num++){
        if(num % 8 == 0){
            printf("%d\n", num);
        }
    }

    return 0;
    }