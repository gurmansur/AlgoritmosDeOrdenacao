#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arrays.h"

int isSwap = 0, isComp = 0;
int isaSwap = 0, isaComp = 0;
int bsSwap = 0, bsComp = 0;
int ssSwap = 0, ssComp = 0;

void insertSort(int a[], int n) {

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int j, chave;

    for(int i = 1; i < n; i++) {
        chave = aCopia[i];
        j = i - 1;
        isComp++;
        while((chave < aCopia[j]) && j >= 0) {
            isComp++;
            aCopia[j+1] = aCopia[j];
            isSwap++;
            j--;
        }
        aCopia[j+1] = chave;
    }

}

void insertSortAlt(int a[], int n) {

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    int aux;

    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if( aCopia[j] < aCopia[j - 1] ) {
                aux = aCopia[j - 1];
                aCopia[j - 1] = aCopia[j];
                aCopia[j] = aux;
                isaSwap++;
            }
            isaComp++;
        }
    }

}

void binarySort(int a[], int n) {

    int i, j;
    int m, x;
    int L, R;

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    for(i = 1; i < n; i++)
    {
        x = aCopia[i];
        L = 0;
        R = i;
        while (L < R)
        {
            m = (L + R)/2;
            if (x >= aCopia[m]) {
                L = m + 1;
            }
            else {
                R = m;
            }
            bsComp++;
        }

        for(j = i; j > L; j = j-1)
        {
            aCopia[j] = aCopia[j-1];
            bsSwap++;
        }

        aCopia[R] = x;

    }
}

void shellSortProper(int a[], int n, int shellIncrement, int shellSegment) {

    int i, j, k, x;

    for(i = (shellSegment + shellIncrement); i < n; i += shellIncrement) {

        k = shellSegment;
        j = i - shellIncrement;
        x = a[i];

        while(j >= shellSegment && k == shellSegment) {
            if(x < a[j]) {
                a[j + shellIncrement] = a[j];
                ssSwap++;
                j = j - shellIncrement;
            }
            else {
                k = j + shellIncrement;
            }
            ssComp++;
        }
        a[k] = x;
    }
}

void shellSort(int a[], int n) {

    int shellPower = floor(log2(n)) - 1;
    int shellSegment, shellIncrement;

    aCopia = (int*)malloc(n * sizeof(int));
    aCopy(a, aCopia, n);

    for(int i = shellPower; i >= 0; i--) {
        shellIncrement = (int) pow(2, i);
        for(shellSegment = 0; shellSegment < shellIncrement; shellSegment++) {
            shellSortProper(aCopia, n, shellIncrement, shellSegment);
        }
    }
}


