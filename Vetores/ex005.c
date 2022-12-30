<<<<<<< HEAD
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int sn = 0;
    scanf("%d", &i);
    int num[i];
    while(c < i){
        scanf("%d", &num[c]); 
        c++;  
    }
    int numcontido;
    scanf("%d", &numcontido);
    c = 0;
    while(c< i){
        if (num[c] == numcontido){
            sn = 1;
        }
        c++;
    }
    
    if (sn == 1){
        printf("pertence\n");
    }
    else{
        printf("nao pertence\n");
    }
    return 0;
=======
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int sn = 0;
    scanf("%d", &i);
    int num[i];
    while(c < i){
        scanf("%d", &num[c]); 
        c++;  
    }
    int numcontido;
    scanf("%d", &numcontido);
    c = 0;
    while(c< i){
        if (num[c] == numcontido){
            sn = 1;
        }
        c++;
    }
    
    if (sn == 1){
        printf("pertence\n");
    }
    else{
        printf("nao pertence\n");
    }
    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}