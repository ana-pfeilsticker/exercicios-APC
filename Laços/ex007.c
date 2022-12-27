#include <stdio.h>
int main(){
    int cl = 0; 
    int cc = 0;
    int numero1 = 0;
    int numero2 = 0;
    int nlinhas, ncolunas;
    scanf("%d %d", &nlinhas, &ncolunas);
    while (cl != nlinhas){
        while (cc != ncolunas){
            printf("[%03d,%03d] ", numero1, numero2);
            numero2 ++;
            cc ++;

        }
    
    numero1 ++;
    cc = 0;
    cl ++;
    printf("\n");
    numero2 = 0;
    }

    return 0;
}