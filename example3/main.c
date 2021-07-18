#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
void func(int **b) {
   *b = (int*)malloc(sizeof(int));
   **b = 400;

   printf("%d\n", **b);
}

int main() {
   int **a = (int**)malloc(sizeof(int*));
   func(a);
   printf("%d\n", **a);
   libreria_imprimir();
}
