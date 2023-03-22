#include <stdio.h>
int main(){
    float euro=166.386;
    int cantDolares;
    float result;
    printf("Ingrese la cantidad de dolares a convertir:\n$");
    scanf("%d", &cantDolares);
    result=cantDolares*euro;
    printf("son: %g Euros.",result);
    return 0;
}