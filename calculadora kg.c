#include <stdio.h>

float kilos_a_libras(float kilos) {
    float libras = kilos * 2.20462;
    return libras;
}

int main() {
    float kilos;
    printf("Ingrese la cantidad de kilos: ");
    scanf("%f", &kilos);
    printf("%.2f kilos son %.2f libras\n", kilos, kilos_a_libras(kilos));
    return 0;
}
