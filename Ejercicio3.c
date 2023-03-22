#include <stdio.h>

int main(){
    int azucar=3,mitadDinero,terceraPart,sobrante;
    float cafe=0.72, dineroDispo;
    printf("Ingrese la cantidad de dinero disponible:\n$");
    scanf("%g",&dineroDispo);
    mitadDinero=((dineroDispo/2)/azucar);
    terceraPart=((dineroDispo/3)/cafe);
    sobrante=dineroDispo-mitadDinero-terceraPart;
    if(mitadDinero==0){
        printf("¡No puede comprar azucar!.\n");
    }else{
        printf("Puede comprar %dkl de azucar.\n", mitadDinero);
    }
    if(terceraPart==0){
        printf("¡No puede comprar cafe!.\n");
    }else{
        printf("Puede comprar %gKl de cafe.\n", terceraPart);
    }
    printf("El dinero restante es: %d$\n", sobrante);
    return 0;
}