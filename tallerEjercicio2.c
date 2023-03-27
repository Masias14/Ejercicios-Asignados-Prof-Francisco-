#include <stdio.h>

int main(){
    int n=0, aux1=0, aux2=0, aux3=0;
    int cont3=0,cont5=0,inver=0;  
    do{
        printf("Ingrese la cantidad de numeros:\n");
        scanf("%d",&n); 
    }while(n<=0);
    if(n<=99){
         aux1=(n%10);
         aux2=(n/10);
        if(aux1==3){
            cont3=cont3+1;
        }else{
            if(aux2==5){
            cont5=cont5+1;
            }
        }  
        printf("\nHay %d numeros 3.",cont3);
        printf("\nHay %d numeros 5.",cont5);
        cont3=0;
        cont5=0;
    }else{
        if(n>99){
            aux1=(n/10);
            aux2=(n%10);
            aux3=(aux1%10);
            aux1=(aux1/10);
            inver=((aux2*100)+(aux3*10)+(aux1*1));
            printf("%d",inver);
            if((aux1)||(aux2)||(aux3)==3){
                cont3=cont3+1;
            }else{
                if((aux1)||(aux2)||(aux3)==5){
                    cont5=cont5+1;
                }
            }
        }
        printf("\nHay %d numeros 3.",cont3);
        printf("\nHay %d numeros 5.",cont5);
    }
    return 0;
}