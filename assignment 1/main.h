///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// HEADER.H /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#ifndef _MAIN_H
#define _MAIN_H
/**
* Fill an array with random numbers
* Sort a 2d array. You choose the sorting algo yourself
* 	- bubble sort
*	- quicksort
*   - shaker sort
* write a new sorting method/algo
* use any 2 comparators for the sorting algos
* 	- use function pointer for this(e.g quicksort)
* 	- include lambda expressions in your comparators
*/

#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstddef>

/**
* function to fill an array with random numbers
* creates a 1d/2d array
* sorting function using the merge sort algorithm
* sorting function using the bubble sort algorithm
* use lambda expressions in algorithm comparators
* function to display elements in the array
* function to delete and free allocated memory of an array
* 
*/

/** prototypes */
void create2dArr(int**& arr, int rows);
void fill2dArr(int** arr, int rows);
void print2dArr(int** arr, int rows);
void del2dArr(int** arr, int rows);
void swap(int& a, int& b);
void bubblesort2d(int** arr, bool (*cmp)(int a, int b));

#endif // _MAIN_H_
///////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// HEADER.H ///////////////////////////////
///////////////////////////////////////////////////////////////////////////////
