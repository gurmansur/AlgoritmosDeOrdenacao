#ifndef EXCHANGE_H_INCLUDED
#define EXCHANGE_H_INCLUDED

int bbSwap, bbComp;
int bbiSwap, bbiComp;
int shSwap, shComp;
int csSwap, csComp;
int qsSwap, qsComp;
int qsbeSwap, qsbeComp;

void bubbleSort(int *a, int n);
void bubbleSortImproved(int *a, int n);
void shakeSort(int *a, int n);
void combSort(int a[], int n);
void quickSort(int *a, int inicio, int fim);
void quickSortMediana(int *a, int inicio, int fim);

#endif // EXCHANGE_H_INCLUDED
