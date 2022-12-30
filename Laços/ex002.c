<<<<<<< HEAD
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
=======
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
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}