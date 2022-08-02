#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int bbSwap = 0, bbComp = 0;
int bbiSwap = 0, bbiComp = 0;
int shSwap = 0, shComp = 0;
int csSwap = 0, csComp = 0;
int qsSwap = 0, qsComp = 0;
int qsbeSwap = 0, qsbeComp = 0;

void bubbleSort(int *a, int n){

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int x, i, j;

    for (j = n-1; j >= 1; j--){
        for (i = 0; i < j; i++){
            if (aCopia[i] > aCopia[i+1]){
                x = aCopia[i];
                aCopia[i] = aCopia[i+1];
                aCopia[i+1] = x;
                bbSwap++;
            }
            bbComp++;
        }
    }
}

void bubbleSortImproved(int *a, int n){

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int x, exchange, i, j;

    exchange = 1;

    for (j = n-1; j >= 1 && exchange == 1; j--) {

        exchange = 0;

        for (i = 0; i < j; i++) {

            if (aCopia[i] > aCopia[i+1]){
                x = aCopia[i];
                aCopia[i] = aCopia[i+1];
                aCopia[i+1] = x;
                exchange = 1;
                bbiSwap++;
            }
            bbiComp++;
        }
    }
}

void shakeSort(int *a, int n){

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int L = 0, R = n - 1, k = n - 1;
    int i, x;

    do{
        for (i = L; i < R; i++){
            if (aCopia[i] > aCopia[i+1]){
                x = aCopia[i];
                aCopia[i] = aCopia[i+1];
                aCopia[i+1] = x;
                k = i;
                shSwap++;
            }
            shComp++;
        }

        R = k;

        for (i = R; i > L; i--){
            if (aCopia[i-1] > aCopia[i]){
                x = aCopia[i];
                aCopia[i] = aCopia[i-1];
                aCopia[i-1] = x;
                k = i;
                shSwap++;
            }
            shComp++;
        }

        L = k;

    } while (L < R);

}

void combSort(int a[], int n) {

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);
    double h = n;
    int x, troca;

    do{
        h = h/1.3;
        if((h == 9) || (h == 10)) {
            h = 11;
        }
        csComp++;

        troca = 0;

        for(int i = 0; i < n - h; i++) {
            if (aCopia[i] > aCopia[(int)(i + h)]) {
                x = aCopia[i];
                aCopia[i] = aCopia[(int)(i + h)];
                aCopia[(int)(i + h)] = x;
                troca = 1;
                csSwap++;
            }
            csComp++;
        }
    } while((troca == 1)||(h >= 1));

}

void quickSort(int *aCopia, int inicio, int fim) {

    int pivot, x, i, j, mid;

    i = inicio;
    j = fim;

    int sum = 0;
    for (int k = i; k <= j; k++){
        sum += aCopia[k];
    }

    int n = (j + 1 - i);
    mid = sum / n;

    pivot = mid;

    do{
        qsComp++;
        while (aCopia[i] < pivot && i < fim){
            i++;
            qsComp++;
        }
        qsComp++;
        while (aCopia[j] > pivot && j > inicio){
            j--;
            qsComp++;
        }

        if (i <= j){
            x = aCopia[i];
            aCopia[i] = aCopia[j];
            aCopia[j] = x;
            i++;
            j--;
            qsSwap++;
        }
        qsComp++;
    } while (j > i);

    if (inicio < j){
        quickSort(aCopia, inicio, j);
    }
    qsComp++;
    if (i < fim){
        quickSort(aCopia, i, fim);
    }
    qsComp++;
}

void quickSortMediana(int *aCopia, int inicio, int fim) {

    int pivot, x, i, j, mid;

    i = inicio;
    j = fim;

    mid = (int) (i + j)/2;

    pivot = aCopia[mid];

    do{
        qsbeComp++;
        while (aCopia[i] < pivot){
            i++;
            qsbeComp++;
        }
        qsbeComp++;
        while (aCopia[j] > pivot){
            j--;
            qsbeComp++;
        }

        if (i <= j){
            x = aCopia[i];
            aCopia[i] = aCopia[j];
            aCopia[j] = x;
            i++;
            j--;
            qsbeSwap++;
        }
        qsbeComp++;
    } while (j > i);

    if (inicio < j){
        quickSortMediana(aCopia, inicio, j);
    }
    qsbeComp++;
    if (i < fim){
        quickSortMediana(aCopia, i, fim);
    }
    qsbeComp++;
}

