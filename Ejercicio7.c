#include <stdio.h>

int main(){
    int num;
    printf("Introduzca el numero: ");
    scanf("%d", &num);
    if ((num % 2) == 0)
    {
        printf("%d ES PAR.", num);
    } else 
    {
        printf("%d ES IMPAR.", num);
    }
    return 0;
}