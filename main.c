#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrays.h"
#include "insertion.h"
#include "selection.h"
#include "exchange.h"
#include "misc.h"

int main() {

    printf("Insira o tamanho do array: ");

    scanf("%d", &n);
    a = (int*) malloc(n * sizeof(int));
    randomGen(a, n, 2000);

    printf("\nArray original: \n\n");
    aPrint(a, n);

    printf("\n--------------------\n\nAlgoritmos de Insercao\n");

    printf("\n\nInsertion Sort: \n\n");
    aPrint(a, n);
    insertSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nInsertion Sort Alternativo: \n\n");
    aPrint(a, n);
    insertSortAlt(a, n);
    aPrint(aCopia, n);

    printf("\n\nShell Sort: \n\n");
    aPrint(a, n);
    shellSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nBinary Sort: \n\n");
    aPrint(a, n);
    binarySort(a, n);
    aPrint(aCopia, n);

    printf("\n--------------------\n\nAlgoritmos de Troca\n");

    printf("\n\nBubble Sort: \n\n");
    aPrint(a, n);
    bubbleSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nBubble Sort Melhorado: \n\n");
    aPrint(a, n);
    bubbleSortImproved(a, n);
    aPrint(aCopia, n);

    printf("\n\nShake Sort: \n\n");
    aPrint(a, n);
    shakeSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nComb Sort: \n\n");
    aPrint(a, n);
    combSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nQuick Sort: \n\n");
    aPrint(a, n);
    aCopy(a, aCopia, n);
    quickSort(aCopia, 0, n - 1);
    aPrint(aCopia, n);

    printf("\n\nQuick Sort BE: \n\n");
    aPrint(a, n);
    aCopy(a, aCopia, n);
    quickSortMediana(aCopia, 0, n - 1);
    aPrint(aCopia, n);

    printf("\n--------------------\n\nAlgoritmos de Selecao\n");

    printf("\n\nSelection Sort: \n\n");
    aPrint(a, n);
    selectSort(a, n);
    aPrint(aCopia, n);

    printf("\n\nHeap Sort: \n\n");
    aPrint(a, n);
    heapSort(a, n);
    aPrint(aCopia, n);

    printf("\n--------------------\n\nOutros Algoritmos\n");

    printf("\n\nMerge Sort: \n\n");
    aPrint(a, n);
    aCopy(a, aCopia, n);
    mergeSort(aCopia, n, 0, n - 1);
    aPrint(aCopia, n);

    printf("\n\nRadix Sort: \n\n");
    aPrint(a, n);
    radixSort(a, n);
    aPrint(aCopia, n);

    printf("\n--------------------\n\nAnalise dos algoritmos\n");
    printf("\t\t\tComparacoes\tTrocas\n");
    printf("Insertion Sort\t\t%d\t\t%d\n", isComp, isSwap);
    printf("Insertion Sort Alt.\t%d\t\t%d\n", isaComp, isaSwap);
    printf("Binary Sort\t\t%d\t\t%d\n", bsComp, bsSwap);
    printf("Shell Sort\t\t%d\t\t%d\n", ssComp, ssSwap);
    printf("Bubble Sort\t\t%d\t\t%d\n", bbComp, bbSwap);
    printf("Bubble Sort Imp.\t%d\t\t%d\n", bbiComp, bbiSwap);
    printf("Shake Sort\t\t%d\t\t%d\n", shComp, shSwap);
    printf("Comb Sort\t\t%d\t\t%d\n", csComp, csSwap);
    printf("Quick Sort Media\t%d\t\t%d\n", qsComp, qsSwap);
    printf("Quick Sort Mediana\t%d\t\t%d\n", qsbeComp, qsbeSwap);
    printf("Selection Sort\t\t%d\t\t%d\n", slComp, slSwap);
    printf("Heap Sort\t\t%d\t\t%d\n", hpComp, hpSwap);
    printf("Merge Sort\t\t%d\t\t%d\n", msComp, msSwap);
    printf("Radix Sort\t\t%d\t\t%d\n", rsComp, rsSwap);

    return 0;
}
