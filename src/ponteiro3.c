#include <stdio.h>
int main(){
    int valores[] = {32,5,26,8,64,18,72};
    int *pvalores = valores;
    printf ("%p com valor %d\n",pvalores,*pvalores);
    pvalores++;
    printf ("%p com valor %d\n",pvalores,*pvalores);
    return 0;
}