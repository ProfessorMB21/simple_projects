#pragma once
#ifndef _SORTING
#define _SORTING

#include "Header1.h"

//prototypes
void bubbleSort(int* arr, int len);
void quickSort(int* arr, int len, int low, int high);
void lastToFirst(int* arr, int size);
void firstToLast(int* arr, int size);
bool sameElement(int* arr, int len);
void swap(int&, int&);

#endif // !_SORTING
