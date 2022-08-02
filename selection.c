#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int slSwap = 0, slComp = 0;
int hpSwap = 0, hpComp = 0;

void selectSort(int *a, int n){

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int i, j, k, x, comp;

    for (i = 0; i < n - 1; i++)
    {
        comp = 0;
        k = i;
        x = aCopia[i];
        for (j = i + 1; j < n; j++){
            if (aCopia[j] < x){
                k = j;
                x = aCopia[k];
                comp = 1;
            }
            slComp++;
        }
        if (comp == 1){
            aCopia[k] = aCopia[i];
            aCopia[i] = x;
            slSwap++;
        }
        slComp++;
    }

}

void heapCheck(int L, int R, int *a){
    int i, j, x;

    i = L;
    j = 2*L;
    x = a[L];

    if (j < R && a[j] < a[j+1]){
        j++;
    }
    hpComp++;

    hpComp++;
    while (j <= R && x < a[j]){
        hpComp++;
        a[i] = a[j];

        i = j;
        j = 2*j;

        if (j < R && a[j] < a[j+1]){
            j++;
        }
        hpComp++;
    }
    a[i] = x;

}

void heapSort(int *a, int n){

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int L, R, x;

    L = n/2 + 1;
    R = n - 1;

    while (L > 0){
        L--;
        heapCheck(L, R, aCopia);
    }

    while (R > 0){
        x = aCopia[0];
        aCopia[0] = aCopia[R];
        aCopia[R] = x;
        hpSwap++;
        R--;
        heapCheck(L, R, aCopia);
    }


}
