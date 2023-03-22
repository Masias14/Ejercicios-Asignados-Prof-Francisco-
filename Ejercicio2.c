#include <stdio.h>

int main(){
    int arista, volumen;
    printf("Ingrese el valor de la arista:\n");
    scanf("%d", &arista);
    volumen=(arista*arista*arista);
    printf("El volumen del cubo es: %d",volumen);
    return 0;
}