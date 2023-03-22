#include <stdio.h>

int main(){
    int hh, mm, ss, hora, min, resultSuma;
    printf("Introduzca la hora en hh:mm:ss \n");
    scanf("%d/%d/%d", &hh, &mm, &ss);
    hora=hh*3600;
    min=mm*60;
    resultSuma=hora+min+ss;
    printf("La cantidad de segundos que pasaron de la hora actual es:\n%d",resultSuma);
    return 0;
}