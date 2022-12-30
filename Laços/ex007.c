<<<<<<< HEAD
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
=======
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
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}