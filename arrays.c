#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomGen(int a[], int n, int limit) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        a[i] = (rand() % limit);
    }
}

void aPrint(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void aCopy(int a[], int aCopia[], int n) {
    for(int i = 0; i < n; i++) {
        aCopia[i] = a[i];
    }
}
