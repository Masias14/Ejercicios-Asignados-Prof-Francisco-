#include <stdio.h>

int main(){
    int v1, v2, aux;
    printf("Introduzca los dos valores a intercambiar:\n");
    printf("Ingrese el valor 1:\n");
    scanf("%d", &v1);
    printf("Ingrese el valor 2:\n");
    scanf("%d", &v2);
    aux=v1;
    v1=v2;
    v2=aux;
    printf("Los valores invertidos son:\n%d,%d", v1, v2);
    return 0;
}