#pragma once
#ifndef _ARRAY
#define _ARRAY

#include "Header1.h"

/**
 * These are functions which you'll write
 * create an array
 * fill an array with a given value
 * delete an array
 * print contents of an array
 * sum of prime numbers in an array
 *  - check for prime numbers in array and sum them up
 * print contents and their indices in the array
 * 
*/
int *createArr(int arrSize);
void fillArr(int *arr, int arrSize, int value);
void fillArr2(int* arr, int arrSize);
void deleteArr(int *arr);
void printArr(int *arr, int size, int i_Index);

#endif // _ARRAY
