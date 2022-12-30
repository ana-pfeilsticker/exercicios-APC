<<<<<<< HEAD
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int imenornumero;
    int menornum;
    scanf("%d", &i);
    int num[i];
    while (c< i){
        scanf("%d", &num[c]);
        if (c == 0){
            imenornumero = c;
            menornum = num[c];
        }
        if (num[c]< menornum){
            menornum = num[c];
            imenornumero = c;
        }
        c++;
    }
    printf("%d", imenornumero);

    return 0;
=======
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int imenornumero;
    int menornum;
    scanf("%d", &i);
    int num[i];
    while (c< i){
        scanf("%d", &num[c]);
        if (c == 0){
            imenornumero = c;
            menornum = num[c];
        }
        if (num[c]< menornum){
            menornum = num[c];
            imenornumero = c;
        }
        c++;
    }
    printf("%d", imenornumero);

    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}