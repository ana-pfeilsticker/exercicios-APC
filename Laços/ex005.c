#include <stdio.h>
int main(){
    int numerolinhas;
    int numero = 1;
    int c = 0; 
    int c2 = 0;
    int j = 1;
    scanf("%d", &numerolinhas);
    while(c < numerolinhas){
        while ( j > c2){
            if (numero <10){
                printf("0%d", numero);
            }
            else{
                printf("%d", numero);
            }
            c2 ++;
            
        }
        printf("\n");
        c ++;
        c2 = 0;
        j ++;
        numero ++;
    }

    printf("\n");
    
    numero = 1;
    c = 0; 
    c2 = 0;
    j = 1;

    while(c < numerolinhas){
        while ( j > c2){
            if (numero <10){
                printf("0%d ", numero);
            }
            else{
                printf("%d ", numero);
            }
            c2 ++;
            numero ++;
            
        }
        printf("\n");
        c ++;
        c2 = 0;
        j ++;
        numero = 1;
    }


    return 0;
}