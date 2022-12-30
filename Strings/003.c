<<<<<<< HEAD
#include <stdio.h>

int main(){
    int i = 0;
    int qntstr;
    int maiorstr = 0;
    char palavra[1003];
    int tamanho;

    scanf("%d", &qntstr);
    while (i < qntstr){
        scanf("%s%n", palavra, &tamanho);
        if (tamanho -1 >= maiorstr){
            maiorstr = tamanho -1;
        }
        
        i++;
    }
    printf("%d", maiorstr);

=======
#include <stdio.h>

int main(){
    int i = 0;
    int qntstr;
    int maiorstr = 0;
    char palavra[1003];
    int tamanho;

    scanf("%d", &qntstr);
    while (i < qntstr){
        scanf("%s%n", palavra, &tamanho);
        if (tamanho -1 >= maiorstr){
            maiorstr = tamanho -1;
        }
        
        i++;
    }
    printf("%d", maiorstr);

>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}