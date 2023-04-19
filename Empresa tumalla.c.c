#define descuentoBeisbol 0.08
#define descuentoTenis 0.06
#define descuento15 0.3
#include <stdio.h>

int main(){
    int annos=0,contB=0,contT=0,mallas=0,respuesta=0,cont_compras=0,cont_des=0;
    float metros=0,precio=0,descuento=0,totalPagar=0;
    do{
        cont_compras=cont_compras+1;
        printf("Ingrese la cantidad de annos que tiene comprando:\n");
        scanf("%d",&annos);
        printf("Ingrese el tipo de malla a comprar:\n");
        printf("[1] Beisbol\n[2] Tenis\n");
        scanf("%d",&mallas);
        if(mallas < 1 || mallas > 2){
        printf("¡Tipo invalido!\n");
        return 0;
        }
        printf("Ingrese la cantidad de metros a comprar:\n");
        scanf("%g",&metros);
        if(mallas==1){
            if(annos>=15){
                cont_des=cont_des+1;
                precio=metros*50;
                descuento=precio*descuento15;
                totalPagar=precio-descuento;
                printf("Total a pagar es:\n$%g\n",totalPagar);
            }else if(annos>5){
                cont_des=cont_des+1;
                precio=metros*50;
                descuento=precio*descuentoBeisbol;
                totalPagar=precio-descuento;
            printf("\nTotal a pagar es:\n$%g",totalPagar);
            }else if(annos<=5){
                precio=metros*50;
                printf("Total a pagar es:\n$%g\n",precio);
            }else{
                printf("¡Verique el anno!");
            }
            contB=contB+1;
        }else if(mallas==2){
            cont_des=cont_des+1;
            contT=contT+1;
            precio=metros*80;
            descuento=precio*descuentoTenis;
            totalPagar=precio-descuento;
            printf("Total a pagar es:\n$%g",totalPagar);
        }else if(annos<=5){
            precio=metros*80;
            printf("Total a pagar es:\n$%g\n",precio);
        }else if(annos>=15){
            cont_des=cont_des+1;
            precio=metros*80;
            descuento=precio*descuento15;
            totalPagar=precio-descuento;
            printf("\nTotal a pagar es:\n$%g",totalPagar);
        }
        if(contB>contT){
            printf("Cantidad mayor de mallas vendidas fue de Beisbol:\n%d",contB);
        }else{
            printf("\nCantidad mayor de mallas vendidas fue de Tenis:\n%d",contT);
        }
        printf("\nMallas para Beisbol vendidas:\n%d",contB);
        printf("\nMallas para Tenis vendidas:\n%d",contT);
        printf("\nCantidad de compras en el dia:\n%d",cont_compras);
        printf("\nCantidad total de descuentos en el dia:\n%d",cont_des);
        printf("\nDesea Comprar nuevamente?:\n");
        printf("[1]Si\n[2]No\n");
        scanf("%d",&respuesta);
    }while(respuesta==1);
    return 0;
}