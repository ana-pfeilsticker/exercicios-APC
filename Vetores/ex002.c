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
}