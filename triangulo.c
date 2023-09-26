#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int ladoA;
    int ladoB;
    int ladoC;
} Triangulo;

int calculaArea(Triangulo triangulo) {
    int area = (triangulo.ladoA * triangulo.ladoB) / 2;
    return area;
}

int calculaPerimetro(Triangulo triangulo) {
    int perimetro = triangulo.ladoA + triangulo.ladoB + triangulo.ladoC;
    return perimetro;
}

int main() {
    Triangulo triangulo1;

    printf("Digite o lado A do triangulo: ");
    scanf("%d", &triangulo1.ladoA);

    printf("Digite o lado B do triangulo: ");
    scanf("%d", &triangulo1.ladoB);

    printf("Digite o lado C do triangulo: ");
    scanf("%d", &triangulo1.ladoC);

    int area = calculaArea(triangulo1);

    int perimetro = calculaPerimetro(triangulo1);

    printf("Area = %d\n", area);
    printf("Perimetro = %d\n", perimetro);

    return 0;
}
