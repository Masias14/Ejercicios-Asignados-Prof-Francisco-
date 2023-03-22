#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Ingrese el numero 1:\n");
    scanf("%d", &num1);
    printf("Ingrese el numero 2:\n");
    scanf("%d", &num2);
    printf("Ingrese el numero 3:\n");
    scanf("%d", &num3);
    if((num1 > num2)&&(num1 > num3)){
        printf("El numero %d es mayor que %d y %d.", num1, num2, num3);
    }else{
            if ((num2 > num1)&&(num2 > num3)){
                printf("El numero %d es mayor que %d y %d.", num2, num1, num3);
            }else{
                printf("El numero %d es mayor que %d y %d.", num3, num1, num2);
            }
    }
    return 0;
}