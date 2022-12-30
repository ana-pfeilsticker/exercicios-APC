<<<<<<< HEAD
#include <stdio.h>
int main(){
    int ntestes;
    int ct = 0; //variavel de controle de numero de testes
    int n; //declarando o numero a ser lido
    int a = 2; //verificador de primos
    int quebra = 4; //verificador de quebra de função caso seja necessario
    int pa = 0; // verificador de primo arrojado


    scanf("%d", &ntestes); //escaneando o numero de testes


    while (ct < ntestes){
        if (ct == ntestes){
            break;
        }
        ct++;
        scanf("%d", &n); //numero a ser avaliado

        while (n > 0){
            if (quebra == 1){
                break;
            }
            if (n == 1){
                printf("N\n");
                pa = 0;
                quebra = 1;
            }
                        
            if (n == 2){
                printf("S\n");
                pa = 0;
                quebra = 1;
            } 
            

            while (a < n/2){
                
                if (quebra == 1){
                    break;
                }   
                if (n%a == 0){
                    pa = 0;
                    printf("N\n");
                    quebra = 1;
                }
                else{
                    pa = 1;
                    a ++;
                }
            }
            a = 2;
            n = n/10;

        }
        quebra = 0;
        
        if (pa == 1){
            printf("S\n");
            }
        }
        pa = 1;
        
        return 0; 
        
=======
#include <stdio.h>
int main(){
    int ntestes;
    int ct = 0; //variavel de controle de numero de testes
    int n; //declarando o numero a ser lido
    int a = 2; //verificador de primos
    int quebra = 4; //verificador de quebra de função caso seja necessario
    int pa = 0; // verificador de primo arrojado


    scanf("%d", &ntestes); //escaneando o numero de testes


    while (ct < ntestes){
        if (ct == ntestes){
            break;
        }
        ct++;
        scanf("%d", &n); //numero a ser avaliado

        while (n > 0){
            if (quebra == 1){
                break;
            }
            if (n == 1){
                printf("N\n");
                pa = 0;
                quebra = 1;
            }
                        
            if (n == 2){
                printf("S\n");
                pa = 0;
                quebra = 1;
            } 
            

            while (a < n/2){
                
                if (quebra == 1){
                    break;
                }   
                if (n%a == 0){
                    pa = 0;
                    printf("N\n");
                    quebra = 1;
                }
                else{
                    pa = 1;
                    a ++;
                }
            }
            a = 2;
            n = n/10;

        }
        quebra = 0;
        
        if (pa == 1){
            printf("S\n");
            }
        }
        pa = 1;
        
        return 0; 
        
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
    }