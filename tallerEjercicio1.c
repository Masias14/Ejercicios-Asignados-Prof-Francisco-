#include <stdio.h>

int main(){
    int i,j,n1,n2,d1,d2;
    int acum1=0,acum2=0;

    printf("Ingrese el primer numero:\n");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&n2);

    for(i=1;i<n1;i++){
        d1=(n1%i);
            if(n1==0){
            acum1=acum1+i; 
            }
            
    }
    for(j=1;j<n2;j++){
        d2=(n2%j);
            if(n2==0){
            acum2=acum2+j;    
        }
    }
    if((acum1==n2)&&(acum2==n1)){
        printf("\nLos numeros ingresados son amigos");
    }else{
        printf("\nLos numeros ingresados no son amigos");
    }
    return 0;
}