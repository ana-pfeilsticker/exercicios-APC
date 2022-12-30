<<<<<<< HEAD
#include <stdio.h>
int main(){
    int menor, smenor,tmenor;
    int i;
    int c = 0;
    
    scanf("%d", &i);
    
    int num[i];
    
    while (c<i){
        scanf("%d", &num[c]);
        if (c==0){
            menor = num[c];
        }
        if (num[c]< menor){
            menor = num[c];
        }
        c++;
    }
    c = 0;
    while(c<i){
        if ((c ==0)&&(num[c]!= menor)){
            smenor = num[c];
        }
        if ((num[c]!= menor)&&(num[c] < smenor)){
            smenor = num[c];
        }
        c++;
    }
    c = 0;
    while(c<i){
        if ((c ==0)&&(num[c]!= smenor)&&(num[c]!= smenor)){
            tmenor = num[c];
        }
        if ((num[c]!= menor)&&(num[c] < tmenor)&&(num[c]!= smenor)){
            tmenor = num[c];
        }
        c++;
    }
    printf("%d\n", smenor);
    printf("%d\n", tmenor);
    return 0;
=======
#include <stdio.h>
int main(){
    int menor, smenor,tmenor;
    int i;
    int c = 0;
    
    scanf("%d", &i);
    
    int num[i];
    
    while (c<i){
        scanf("%d", &num[c]);
        if (c==0){
            menor = num[c];
        }
        if (num[c]< menor){
            menor = num[c];
        }
        c++;
    }
    c = 0;
    while(c<i){
        if ((c ==0)&&(num[c]!= menor)){
            smenor = num[c];
        }
        if ((num[c]!= menor)&&(num[c] < smenor)){
            smenor = num[c];
        }
        c++;
    }
    c = 0;
    while(c<i){
        if ((c ==0)&&(num[c]!= smenor)&&(num[c]!= smenor)){
            tmenor = num[c];
        }
        if ((num[c]!= menor)&&(num[c] < tmenor)&&(num[c]!= smenor)){
            tmenor = num[c];
        }
        c++;
    }
    printf("%d\n", smenor);
    printf("%d\n", tmenor);
    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}