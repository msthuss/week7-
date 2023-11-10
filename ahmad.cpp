#include <stdio.h>

int main() {
    double myDouble = 2.4;
    double *ptrDouble;
    ptrDouble = &myDouble;

    printf("Variable value: %.2f\n", myDouble);
    printf("Variable address: %p\n", (void*)&myDouble);

    printf("Pointer value: %.2f\n", *ptrDouble);
    printf("Pointer address: %p\n", (void*)ptrDouble);

    return 0;
}