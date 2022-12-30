#include <stdio.h>
int main(){
    int c = 0;
    int nlinhas;
    int maiornumero;
    int numeroentrada;
    scanf("%d", &nlinhas);
    while (c < nlinhas){
        scanf("%d", &numeroentrada);
        if (c == 0){
            maiornumero = numeroentrada;
        }
        if (numeroentrada>maiornumero){
            maiornumero = numeroentrada;
        }
        c ++;

    }
    printf("%d\n", maiornumero);

    return 0;
}