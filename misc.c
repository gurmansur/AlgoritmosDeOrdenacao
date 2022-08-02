#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int msSwap = 0, msComp = 0;
int rsSwap = 0, rsComp = 0;

void intercala(int aCopia[], int n, int p, int q, int r) {

    int *L;

    L = (int*)malloc(n * sizeof(int));

    for(int i = p; i <= q; i++) {
        L[i] = aCopia[i];
    }

    for(int j = q + 1; j <= r; j++) {
        L[r + q + 1 - j] = aCopia[j];
    }

    int i = p;
    int j = r;

    for(int k = p; k <= r; k++) {
        if(L[i] <= L[j]) {
            aCopia[k] = L[i];
            msSwap++;
            i++;
        } else {
            aCopia[k] = L[j];
            msSwap++;
            j--;
        }
        msComp++;
    }

}

void mergeSort(int aCopia[], int n, int p, int r) {

    if(p < r) {
        msComp++;
        int q = ((p + r)/2);
        mergeSort(aCopia, n, p, q);
        mergeSort(aCopia, n, q + 1, r);
        intercala(aCopia, n, p, q, r);
    }
}

void radixSort(int a[], int n) {

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int i, *b, maxValue = -2147483648, radix = 1;
    b = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        if(aCopia[i] > maxValue) {
            maxValue = aCopia[i];
        }
        rsComp++;
    }

    while(maxValue/radix > 0) {

        int bucket[10] = {0};
        for(i = 0; i < n; i++) {
            bucket[(aCopia[i] / radix) % 10]++;
        }

        for(i = 1; i < 10; i++) {
            bucket[i] += bucket[i - 1];
        }

        for(i = n - 1; i >= 0; i--) {
            b[--bucket[(aCopia[i] / radix ) % 10]] = aCopia[i];
        }

        for(i = 0; i < n; i++) {
            aCopia[i] = b[i];
            rsSwap++;
        }

        radix *= 10;

    }
}
