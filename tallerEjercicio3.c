#include <stdio.h>
#define DESCUENTO 0.50
#define GIF 300
#define DES3 00.3
#define DES5 00.5
int main(){
    int nci=0,contPro=0,porcenGanan=0,contSin=0,contGif=0,cont3=0,cont5=0;
    char otro,etiqueta,respuesta;
    float precio=0,acumPromocion=0,acumPrecio=0,aumento=0;
    do{
        printf("Ingrese el precio del producto:\n$");
        scanf("%g",&precio);
        if("precio >= 1000 && precio <=5000"){
        printf("Tiene etiqueta de promocion?\n");
        scanf("%s",&respuesta);
        if(respuesta=='s'){
            acumPromocion=acumPromocion+precio;
            contPro=contPro+1;
            printf("Precio a pagar: %g",acumPromocion);
        }else{
            acumPrecio=acumPrecio+precio;
            contSin=contSin+1;
            printf("\nPrecio a pagar: %g",acumPrecio);
        }
        printf("\nDesea ingresar otro producto?:\n[1]Si\n[2]No\n");
        scanf("%s",&otro);
        }else{
            printf("¡Verifique el precio!");
        }
        
    }while(otro=='s');
    printf("La cantidad de productos con promocion:\n%d",contPro);
    printf("\nLa cantidad de productos sin promocion:\n%d",contSin);
    printf("\nIngrese el ultimo digito de su cedula de identidad:\n");
    scanf("%d",&nci);
    if((nci%2)==0){
        aumento=(DES3+DESCUENTO);
        printf("Aumento de %g por ultimo digito par.\n",aumento);
    }else{
        aumento=DES5;
        printf("Aumento de %g por ultimo digito impar.",aumento);
    }
    
    return 0;
}