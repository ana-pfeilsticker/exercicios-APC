<<<<<<< HEAD
#include <stdio.h>

int main(){

unsigned long long int cpf;
scanf("%llu", &cpf);

int n1 = (cpf/ 10000000000);
int n2 = ((cpf % 10000000000) / 1000000000);
int n3 = ((cpf % 1000000000) / 100000000);
int n4 = ((cpf % 100000000) / 10000000);
int n5 = ((cpf % 10000000) / 1000000);
int n6 = ((cpf % 1000000) / 100000);
int n7 = ((cpf % 100000) / 10000);
int n8 = ((cpf % 10000) / 1000);
int n9 = ((cpf % 1000) / 100);
int n10 = ((cpf % 100) / 10);
int n11 = ((cpf % 10) / 1);







int r1 = ((10 * n1) + (9 * n2) + (8 * n3) + (7 * n4) + (6 * n5) + (5 * n6) + (4 * n7) + (3 * n8) + (2 * n9)) % 11;
int r2 = ((10 * n2) + (9 * n3) + (8 * n4) + (7 * n5) + (6 * n6) + (5 * n7) + (4 * n8) + (3 * n9) + (2 * n10)) % 11;

if (((r1 == 0)||(r1 == 1))&&((r2 == 0)||(r2 == 1))){
    if ((n10 == 0)&&(n11 == 0)){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 != 0)&&(r1 != 1))&&((r2 != 0)&&(r2 != 1))){
    if ((n10 == (11 - r1))&&(n11 == (11 - r2))){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 != 0)&&(r1 != 1))&&((r2 == 0)||(r2 == 1))){
    if ((n10 == (11 - r1))&&(n11 == 0)){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 == 0)||(r1 == 1))&&((r2 != 0)&&(r2 != 1))){
    if (((n10 == 0))&&((n11 == (11 - r2)))){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}

return 0;
=======
#include <stdio.h>

int main(){

unsigned long long int cpf;
scanf("%llu", &cpf);

int n1 = (cpf/ 10000000000);
int n2 = ((cpf % 10000000000) / 1000000000);
int n3 = ((cpf % 1000000000) / 100000000);
int n4 = ((cpf % 100000000) / 10000000);
int n5 = ((cpf % 10000000) / 1000000);
int n6 = ((cpf % 1000000) / 100000);
int n7 = ((cpf % 100000) / 10000);
int n8 = ((cpf % 10000) / 1000);
int n9 = ((cpf % 1000) / 100);
int n10 = ((cpf % 100) / 10);
int n11 = ((cpf % 10) / 1);







int r1 = ((10 * n1) + (9 * n2) + (8 * n3) + (7 * n4) + (6 * n5) + (5 * n6) + (4 * n7) + (3 * n8) + (2 * n9)) % 11;
int r2 = ((10 * n2) + (9 * n3) + (8 * n4) + (7 * n5) + (6 * n6) + (5 * n7) + (4 * n8) + (3 * n9) + (2 * n10)) % 11;

if (((r1 == 0)||(r1 == 1))&&((r2 == 0)||(r2 == 1))){
    if ((n10 == 0)&&(n11 == 0)){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 != 0)&&(r1 != 1))&&((r2 != 0)&&(r2 != 1))){
    if ((n10 == (11 - r1))&&(n11 == (11 - r2))){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 != 0)&&(r1 != 1))&&((r2 == 0)||(r2 == 1))){
    if ((n10 == (11 - r1))&&(n11 == 0)){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}
if (((r1 == 0)||(r1 == 1))&&((r2 != 0)&&(r2 != 1))){
    if (((n10 == 0))&&((n11 == (11 - r2)))){
        printf("valido");
    }
    else{
        printf("invalido");
    }
}

return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}