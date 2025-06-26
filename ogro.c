#include <stdio.h>

int main(){

int filhos, soma = 0, a;

scanf("%d", &filhos);

for (int i = 0; i < filhos;  i++){
    scanf("%d", &a);
    soma = soma + a;
    }
    printf("%d\n", soma);
}