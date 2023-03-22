#include <stdio.h>

int main (){
    float nota1, nota2, nota3, nota;
    printf("Introduzca la notas de los 3 examenes:\n");
    printf("Ingrese nota 1:\n");
    scanf("%g", &nota1 );
    printf("Ingrese nota 2:\n");
    scanf("%g", &nota2);
    printf("Ingrese nota 3:\n");
    scanf("%g", &nota3);
    nota=(nota1+nota2+nota3)/3;
    printf("La nota media de los 3 examenes es:\n%g", nota);
    return 0;
}