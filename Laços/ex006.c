<<<<<<< HEAD
#include <stdio.h>
int main(){
    
    int somapar = 0;
    int somaimpar = 0;
    int numero = 0;
    scanf("%d", &numero);
    
    while(numero!= 0){
        if (numero%2 == 0){
        somapar += numero;
        }
        if (numero%2 == 1){
        somaimpar += numero;
        }

        scanf("%d", &numero);

    }
    printf("%d %d\n", somapar, somaimpar);

    return 0;
=======
#include <stdio.h>
int main(){
    
    int somapar = 0;
    int somaimpar = 0;
    int numero = 0;
    scanf("%d", &numero);
    
    while(numero!= 0){
        if (numero%2 == 0){
        somapar += numero;
        }
        if (numero%2 == 1){
        somaimpar += numero;
        }

        scanf("%d", &numero);

    }
    printf("%d %d\n", somapar, somaimpar);

    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}