#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED
#include "arrays.h"

int isSwap, isComp;
int isaSwap, isaComp;
int bsSwap, bsComp;
int ssSwap, ssComp;

void insertSort(int a[], int n);
void insertSortAlt(int a[], int n);
void binarySort(int a[], int n);
void shellSort(int a[], int n);
void shellSortProper(int a[], int n, int shellIncrement, int shellSegment);

#endif // INSERTION_H_INCLUDED
