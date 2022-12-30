<<<<<<< HEAD
#include <stdio.h>


int main(){
    int xa, xb, xc;
    scanf("%d %d %d", &xa, &xb, &xc); 
    if ((xa == xb) && (xa == xc)){
        printf("empate");
    
    }
    if((xa == xb) && (xa != xc)){
        printf("C\n");
    }
    if((xc == xb) && (xa != xc)){
        printf("A\n");
    }
            
    if((xa == xc) && (xa != xb)){
        printf("B\n");
    }

=======
#include <stdio.h>


int main(){
    int xa, xb, xc;
    scanf("%d %d %d", &xa, &xb, &xc); 
    if ((xa == xb) && (xa == xc)){
        printf("empate");
    
    }
    if((xa == xb) && (xa != xc)){
        printf("C\n");
    }
    if((xc == xb) && (xa != xc)){
        printf("A\n");
    }
            
    if((xa == xc) && (xa != xb)){
        printf("B\n");
    }

>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}